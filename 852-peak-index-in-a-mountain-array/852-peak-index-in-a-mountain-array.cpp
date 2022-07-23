class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i;
        int ele=*max_element (arr.begin(),arr.end());  //o(n)
            for(int i=0;i<n;i++){
            if(arr[i]==ele)
                return i;
        }
return i;
    }
};