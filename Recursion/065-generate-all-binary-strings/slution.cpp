//Author: Aryan Singh
//Date: 27/01/2026
//Description: in this we will first try whole combination for '0' and then while backtracking will check the condition and then will add '1' to it.

class solution{
public:
  void solve(int n, string current, vector<string> &ans){
    if(current.length() == n){
        ans.push_back(current);
        return;
    }

    solve(n, current + '0', ans);

    if(current.empty() || current.back() != '1'){
        solve(n, current + '1', ans);
    }
  }

vector<string> generateBinarystrings(int n){
    vector<string> ans;
    solve(n, "", ans);
    return ans;
 }
};
