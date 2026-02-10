//Author: Aryan Singh
//Date: 10/02/26
//Description: Done the brute force, HAve to do by optimal

class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int maxlen = 0;
          

        for(int i = 0; i < n; i++){
            unordered_set<int> evenSet;
             unordered_set<int> oddSet;
            for(int j = i; j < n; j++){
                if(nums[j] % 2 == 0){
                    evenSet.insert(nums[j]);
                }
                else{
                    oddSet.insert(nums[j]);
                }
                if(evenSet.size() == oddSet.size()){
                    maxlen = max(maxlen, j-i+1);
                }
            }
        }
        return maxlen;
    }
};
