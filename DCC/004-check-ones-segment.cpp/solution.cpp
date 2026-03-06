//Author: Aryan SIngh
//Date: 06/03/26
//Description: 

class Solution {
public:
    bool checkOnesSegment(string s) {
        bool zerofound = false;

        for(char ch : s){
            if(ch == '0'){
                zerofound = true;
            }
            else if(zerofound) return false;
        }
    
    return true;
    }
    
};
