class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
        
        // Initialize first row
        for(int j = 0; j < m; j++) {
            dp[0][j] = matrix[0][j];
        }
        
        // Process each row from top to bottom
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < m; j++) {
                // Left diagonal
                if(j > 0) {
                    dp[i][j] = min(dp[i][j], dp[i-1][j-1]);
                }
                // Straight up
                dp[i][j] = min(dp[i][j], dp[i-1][j]);
                // Right diagonal
                if(j < m-1) {
                    dp[i][j] = min(dp[i][j], dp[i-1][j+1]);
                }
                
                dp[i][j] += matrix[i][j];
            }
        }
        
        // Find minimum in last row
        return *min_element(dp[n-1].begin(), dp[n-1].end());
    }
};
