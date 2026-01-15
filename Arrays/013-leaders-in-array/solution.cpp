//Author: Aryan SIngh
//Date: 15/01/26
//Description:

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        int maxright = arr[n-1];
        vector<int> res;
        res.push_back(maxright);
        for( int i = n-2; i >= 0; i--){
             if( arr[i] >= maxright){
                 maxright = arr[i];
                 res.push_back(maxright);
             }    
        }
        reverse( res.begin(), res.end());
        return res;
    }
};
