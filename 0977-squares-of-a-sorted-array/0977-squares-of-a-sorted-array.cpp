class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =nums.size();
        int i=0;
        int j=n-1;
        int k=n-1;
        vector<int>ans(n,0);
        
        while(i<=j){
            int start=nums[i]*nums[i];
            
            int last=nums[j]*nums[j];
            
            if(start>last){
                ans[k]=start;
                i++;
                k--;
            }
            else{
                ans[k]=last;
                j--;
                k--;
            }
            
        }
        return ans;
    }
};