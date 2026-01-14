//Author: Aryan SIngh
//Date: 14/01/16
//Description:
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int res = 0;
        // int profit = 0;
        for( int i = 1; i < prices.size(); i++){
            if( prices[i] > prices[i-1]){
               int profit = prices[i] - prices[i-1];
                res += profit;
            }
        }
        return res;
    }
};
