//Author: Aryan Singh
//Date: 30/01/26
//Description: Got the logic fully but have difficulty in writing code fully by myself

class Solution {
public:
    
    int row[4] = {1, 0, 0, -1};   // D L R U
    int col[4] = {0, -1, 1, 0};
    string dir = "DLRU";
    
    bool valid(int i, int j, int n) {
        return (i >= 0 && j >= 0 && i < n && j < n);
    }
    
    void Total(vector<vector<int>> &matrix, int i, int j, int n,
               string &path, vector<string> &ans,
               vector<vector<int>> &visited) {
        
        // Base case
        if(i == n-1 && j == n-1) {
            ans.push_back(path);
            return;
        }
        
        visited[i][j] = 1;
        
        for(int k = 0; k < 4; k++) {
            int newi = i + row[k];
            int newj = j + col[k];
            
            if(valid(newi, newj, n) &&
               matrix[newi][newj] == 1 &&
               visited[newi][newj] == 0) {
                
                path.push_back(dir[k]);
                Total(matrix, newi, newj, n, path, ans, visited);
                path.pop_back();
            }
        }
        
        visited[i][j] = 0;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        vector<string> ans;
        
        if(m[0][0] == 0) return ans;
        
        vector<vector<int>> visited(n, vector<int>(n, 0));
        string path = "";
        
        Total(m, 0, 0, n, path, ans, visited);
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};
