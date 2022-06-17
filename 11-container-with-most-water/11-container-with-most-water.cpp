class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        int ans=0;
        int newans=0;
        while(i<j){
            if(arr[i]<arr[j]){
                newans=arr[i]*(j-i);
                i++;
                ans=max(ans,newans);
            }
            else{
                newans=arr[j]*(j-i);
                j--;
                ans=max(ans,newans);
            }
            
        }
        return ans;
    }
};