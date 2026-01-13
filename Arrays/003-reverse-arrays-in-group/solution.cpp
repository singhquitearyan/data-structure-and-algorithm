//Author: Aryan Singh
//Date:13/01/2026
//Description: here we're using the ' i+=k' because it will set a limit upto a group k and the after that
// iteration we will run while loop under that much limit. 
// like k = 3, so i = 0 and  i=+ 3, so for loop will initialize at i = 0 and then while loop will run until the condition is met
// and the when the while loop overs then i will start from 3 and then same things will happen.

class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n = arr.size();
        for( int i = 0; i <n; i+=k){
            
            int left = i;
            int right = min( i+k-1, n - 1);
            while(left <= right){
                swap(arr[left++], arr[right--]);
            }
        }
    }
};
