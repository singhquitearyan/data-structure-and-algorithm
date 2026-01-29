//Author: Aryan Singh
//DAte: 29/01/26
//Description: What the Question Is Asking
// You are given two numbers:
// k → how many numbers you must pick
// n → the total sum those numbers must make

// You need to find all possible combinations of exactly k numbers:
// Numbers must be from 1 to 9
// Each number can be used only once
// The numbers in a combination must add up to n
// No duplicate combinations allowed

// 🔹 In Simple Words
// Pick k different numbers from 1–9 such that their sum equals n.

// 🔹 Example
// If:
// k = 3
// n = 9

// We need 3 different numbers that add up to 9.
// Valid answers:
// [1,2,6]
// [1,3,5]
// [2,3,4]

// 🔹 Important Points
// You cannot reuse a number.

// Order does not matter.
// [1,2,6] is same as [2,1,6], so only one is allowed.

// Numbers must be unique within a combination.

class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        backtrack(k, n, 1, temp);
        return ans;
    }

    void backtrack( int k,int target, int start, vector<int>& temp){
        if(target == 0 && temp.size() == k){
            ans.push_back(temp);
            return;
        }

        if( target < 0 || temp.size() > k) return;

        for(int i = start; i <= 9; i++){
            temp.push_back(i);
            backtrack(k, target - i, i+1 ,temp);
            temp.pop_back();
        }
    }
};
