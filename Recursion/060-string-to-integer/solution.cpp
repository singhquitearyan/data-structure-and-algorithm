//Author: Aryan SIngh
//Date: 22/01/26
//Description:

class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        long long num = 0;
        int i = 0;
        int sign = 1; 
        
        //check spaces
        while(i<n && s[i] == ' '){
            i++;
        }

        //check sign
       if (i < n && (s[i] == '+' || s[i] == '-')) {
           if (s[i] == '-') sign = -1;
            i++;
         }

         //for cases like if '+-12' occurs, then according to rule after the sign thre should digit occur else it should return 0, yhat's why this condition is here.
        if( i >= n || !isdigit(s[i])) return 0;

         // convert chr into digits
        while( i < n && isdigit(s[i])){
            num = (num*10 + (s[i] - '0'));
            

            if(num * sign >= INT_MAX) return INT_MAX;
            if( num * sign <= INT_MIN) return INT_MIN;
            i++;

           
        }

        return num * sign;
    }
};

//in check sign we're using 'if' instead of 'while' bcoz while will check for multiple signs and according to rule as if after sign digit didn't came then it should return 0 thats's why if we use 'if' then it will check only once. 
