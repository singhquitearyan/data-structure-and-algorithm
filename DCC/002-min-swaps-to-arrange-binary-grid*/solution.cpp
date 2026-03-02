//Author: Aryan Singh
//Date: 02/03/26
//Description: This will be done by greedy algorithms. So learn greedy algo and then attempt again

class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> trailingzeroes(n);

        for(int i = 0; i<n; i++){
            int count = 0;
            for(int j = n-1; j>=0; j--){
                if(grid[i][j] == 0) count++;
                else break;
            }
            trailingzeroes[i] = count;
        }
        int swaps = 0;

        for(int i = 0; i<n; i++){
            int required = n-1-i;
            int j = i;

            while(j < n&& trailingzeroes[j] < required){
                j++;
            }

            if(j==n) return -1;

            while(j>i){
                swap(trailingzeroes[j], trailingzeroes[j-1]);
                swaps++;
                j--;
            }
        }

        return swaps;
    }
};
