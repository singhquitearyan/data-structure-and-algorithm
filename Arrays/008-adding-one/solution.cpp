//Author: Aryan singh
//Date: 14/01/2026
//Description: 
class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        int carry = 1;
        int n = arr.size();
        for(int i = n-1; i>= 0; i--){
            int sum = arr[i] + carry;
            arr[i] = sum % 10;
            carry = sum / 10;
        }
        
        if(carry){
            arr.insert(arr.begin(), 1);
        }
        return arr;
    }
};
