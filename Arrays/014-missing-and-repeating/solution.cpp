//Author: Aryan SIngh
//Date: 15/01/16
//Description: This is the brute force method for the problem with T/C -> O(n), S/C-> O(n).
// have to do the better and optimal solution for the problem
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> freq(n+1, 0);
        int repeating = -1, missing = -1;
        
        for(int i = 0; i<n; i++){
            freq[arr[i]]++;
        }
        
        for(int i = 1; i<= n; i++){
            if(freq[i] == 0) {
                missing = i;
            }
            else if(freq[i] % 2 == 0){
                repeating = i;
            }
        }
        return { repeating, missing};
    }
};
