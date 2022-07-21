class Solution {
public:
    int robfrom(int currentindex,vector<int>&wealth,vector<int>&dp,int n){
        
        if(currentindex>=n)
            return 0;
        if(dp[currentindex]!=-1){
            return dp[currentindex];
        }
        
        int stealcurrent=wealth[currentindex]+robfrom(currentindex+2,wealth,dp,n);
        int skipcurrent=robfrom(currentindex+1,wealth,dp,n);
        
        int ans=max(stealcurrent,skipcurrent);
        dp[currentindex]=ans;
        return ans;
    }
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n,-1);
        int totalamount =robfrom(0,nums,dp,n);
        return totalamount;   //return robfrom(0,nums,dp,n);
    }
    
    
};