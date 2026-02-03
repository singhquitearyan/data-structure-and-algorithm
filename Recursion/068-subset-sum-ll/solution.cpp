//Author: Aryan Singh
//Description:

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        sort(nums.begin(), nums.end());
        backtrack(0, nums, ans, temp);
        return ans;
    }

    void backtrack( int start, vector<int>& nums, vector<vector<int>>& ans, vector<int> temp){
        ans.push_back(temp); 
        //At every recursive call,
// we add the current subset.Even empty subset gets added.That’s why this line comes before the loop.

        for(int i = start; i < nums.size(); i++){ 
            // If: This is NOT the first element at this level And current element equals previous element Then skip.
            if( i > start && nums[i] == nums[i-1])
            continue;

            temp.push_back(nums[i]);
            backtrack(i+1, nums, ans, temp);
            temp.pop_back();
        }
    }
};
