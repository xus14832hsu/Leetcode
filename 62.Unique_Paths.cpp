#include <iostream>
#include <vector>

using namespace std;

int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m, vector<int>(n, 1));
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m - 1][n - 1];
}

int main() {
    int m, n;
    cout << "Enter grid dimensions (m and n): ";
    cin >> m >> n;
    
    cout << "Number of unique paths: " << uniquePaths(m, n) << endl;
    
    return 0;
}


/*class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i][j] = 1;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};*/