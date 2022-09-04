class Solution {
public:
    vector<int> countBits(int n) {
      int offset=1;
      vector<int>dp(n+1);
      dp[0]=0;
      int i=1;
      while(i<=n){
        if(i==offset*2){
          offset*=2;
        }
        dp[i]=1+dp[i-offset];
        i++;
        
      }
      
      return dp;
    }
};