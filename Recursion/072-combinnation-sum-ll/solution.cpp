//Author: Aryan Singh
//Description:

class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int>temp;
        backtrack(candidates, 0, target, temp);
        return ans;
    }

    void backtrack(vector<int>& candidates, int index, int target, vector<int>& temp){
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        for(int i = index; i < candidates.size(); i++){
            if( i > index && candidates[i] == candidates[i-1])
            continue;

            if(candidates[i] > target)
            break;

            temp.push_back(candidates[i]);
            backtrack(candidates, i+1, target - candidates[i], temp);
            temp.pop_back();
        }
    }
};

