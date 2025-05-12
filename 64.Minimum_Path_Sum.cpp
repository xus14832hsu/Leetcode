#include <iostream>
#include <vector>

using namespace std;

int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));
    
    dp[0][0] = grid[0][0];
    for (int i = 1; i < m; i++) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    for (int j = 1; j < n; j++) {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        }
    }
    return dp[m - 1][n - 1];
}

int main() {
    int m, n;
    cout << "Enter grid dimensions (m and n): ";
    cin >> m >> n;
    
    vector<vector<int>> grid(m, vector<int>(n));
    cout << "Enter grid values: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    
    cout << "Minimum path sum: " << minPathSum(grid) << endl;
    
    return 0;
}

/*class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int dp[grid.size()][grid[0].size()];
        dp[0][0] = grid[0][0];
        for(int i=1; i<grid.size();i++){
            dp[i][0] = dp[i-1][0]+ grid[i][0];
        }
        for(int i=1; i<grid[0].size();i++){
            dp[0][i] = dp[0][i-1] + grid[0][i];
        }
        for(int i=1;i<grid.size();i++){
            for(int j=1;j<grid[0].size();j++){
                dp[i][j] = min(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }
        }
        return dp[grid.size()-1][grid[0].size()-1];
    }
};*/