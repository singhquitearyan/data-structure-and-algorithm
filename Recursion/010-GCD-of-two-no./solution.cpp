//Author: Aryan SIngh
//Date: 23/09/25
//Description: Done with the eucladin's algorithm(study about it further how it works and why this output only came here)
class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        
            if(b == 0) return a;
            return gcd(b, a%b);
    
    }
};
