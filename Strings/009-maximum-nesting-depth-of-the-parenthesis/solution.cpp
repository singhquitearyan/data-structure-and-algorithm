class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int p = 0;
        for(char ch : s){
            if(ch == '(') p++;
            else if (ch == ')') p--;
            ans = max(ans, p);
        }
        return ans;
    }
};
