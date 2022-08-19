class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int left=0,right=1,maxprofit=0;
      
      for(int right=1;right<prices.size();right++){
        if(prices[right]-prices[left]>0){
          int currprofit=prices[right]-prices[left];
          maxprofit=max(maxprofit,currprofit);
        }
        else{
          left=right;
        }
      }
      return maxprofit;
    }
};