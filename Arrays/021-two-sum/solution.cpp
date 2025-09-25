//Author: Aryan SIngh
//Date: 25/09/25
//Description: Two sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map <int, int> mpp;
        for( int  i = 0; i<n; i++){
            int num = nums[i];
            int needed = target - num;
            if(mpp.find(needed) != mpp.end()){
                return {mpp[needed], i};
            }
            mpp[num] = i;
        }
        return { -1, -1};
    }
};
