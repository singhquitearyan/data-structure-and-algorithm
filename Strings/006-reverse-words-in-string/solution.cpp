//Author: Aryan Singh
//Date:19/02/26
//Description:

class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        reverse(s.begin(), s.end());
        string word = "";
        for(int i = 0; i< s.length(); i++){
            
            while( i < s.length() && s[i] != ' '){
                word += s[i];
                i++; 
            }
            reverse(word.begin(), word.end());
            if(word.length() > 0)
            result += " " + word;
            
            word = "";
        }
        return result.substr(1);
        
    }
};
