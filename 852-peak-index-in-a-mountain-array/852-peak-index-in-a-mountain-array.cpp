class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;int r=arr.size()-1;
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            
            if(mid!=0 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]<arr[mid+1]){  //lies in increasing sequence
                l=mid+1;
                }
            else{
                r=mid-1;    //arr[mid]<arr[mid-1];
            }
        }
        return mid;
    }
};