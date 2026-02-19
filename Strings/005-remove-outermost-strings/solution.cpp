//Author: Aryan Singh
//Date: 19/02/2026
//Description: Leetcode - 1021

class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string result;
        for(int i = 0; i<s.length(); i++){
            if( s[i] =='('){
                if(cnt>0){
                    result.push_back('(');
                }
                cnt++;

            } 
            else{
                if(cnt > 1){
                    result.push_back(')');
                }
                cnt--;
            }
            
        }
        return result;
    }
};
