//Author: Aryan Singh
//Date: 01/03/26
//Description: Key Insight (VERY IMPORTANT)

// Each deci-binary number contributes:
// At most 1 per digit position
// So if any digit in n is, for example, 8,
// you need at least 8 deci-binary numbers to build that digit.

// Because:
// Each deci-binary number can only contribute 0 or 1 at that position.
// To make digit 8, you need eight 1s stacked there.

// 💡 Final Conclusion
// 👉 The answer is simply:
// The maximum digit present in the string

class Solution {
public:
    int minPartitions(string n) {
        int l = n.size();
        int maxi = INT_MIN;
        for(int i = 0; i<l; i++){
            int find = (n[i] - '0');
            maxi = max(maxi, find);
        }
        return maxi;
    }
};
