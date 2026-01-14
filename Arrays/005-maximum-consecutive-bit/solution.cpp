//Author: Aryan Singh
//Date: 14/01/2026
//Description:
class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int count = 1;
        int maxcount = 1;
        int n = arr.size();
        for( int i = 1; i < n; i++){
            
            if( arr[i] == arr[i-1]){
                
                
             count++;
           
            }
            else
            {
                count = 1;
                
        }
         maxcount = max( maxcount , count);
        
    }
    return maxcount;
    }
};
