class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxprofit=0;
      int mincost=prices[0];
      
      
      for(int i=1; i<prices.size();i++){
        if(prices[i]-prices[i-1]>0){    //theres a profit
          int currprofit=prices[i]-mincost;
          maxprofit=max(maxprofit,currprofit);
        }
        else{
          mincost=min(mincost,prices[i]);
        }
        
      }
      return maxprofit;
    }
};