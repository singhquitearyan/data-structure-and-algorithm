//Author: Aryan Singh
//Date: 30/11/25
//Description: Have done this solution with S/C -> O(2N). Not done the optimal solution with S/C -> O(1)

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if( n == 0) return 0;

        vector<int> prefixMax(n), suffixMax(n);

        prefixMax[0] = height[0];
        for(int i = 1; i < n; i++){
            prefixMax[i] = max(prefixMax[i-1], height[i]);
        }

        suffixMax[n-1] = height[n-1];
        for(int i = n-2; i >= 0; i--){
            suffixMax[i] = max(suffixMax[i+1], height[i]);
        }

        int trapped = 0;
        for(int i = 0; i<n; i++){
            trapped += min( prefixMax[i], suffixMax[i]) - height[i];
        }
        return trapped;
    }
};
