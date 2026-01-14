//Author: Aryan SIngh
//Date: 14/01/26
//Description:

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
         int res = 0;
        for( int i = 0; i < prices.size(); i++){
             int minprices = min( minprices, prices[i]);
              res = max( res, prices[i] - minprices);
                     }
                     return res;
    }
};
