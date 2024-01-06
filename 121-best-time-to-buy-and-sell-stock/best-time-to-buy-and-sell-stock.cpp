class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
        return 0;
        }

      int i=0,j=1;
      int maxprofit = 0;
      while(j < prices.size()){
          if(prices[i]<prices[j]){
               int currentprofit = prices[j]-prices[i];
              maxprofit=max(currentprofit,maxprofit);
              j++;
          }
          else {
              i=j;
              j++;
          }
        
      }
      return maxprofit;  
    }
};