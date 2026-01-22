//Author: Aryan Singh
//Date: 22/01/26
//Description: have to remeber the process. can't think on the moment and make a logic
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;

        if ( N < 0){
            x = 1/x;
            N = -N;
        }

        double result = 1;

        while( N > 0){
            if( N % 2 == 1){  //if odd
                result = result * x;
            }

            x = x * x; //square the base 
            N = N/2;  //reduce power
        }

        return result;
    }
};
