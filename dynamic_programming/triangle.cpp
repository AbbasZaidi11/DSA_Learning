class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> dp(n, INT_MAX);

        // Initialize with the first row of the triangle
        dp[0] = triangle[0][0];

        for (int i = 1; i < n; i++) {
            // Traverse the row in reverse to ensure we don't overwrite values
            for (int j = i; j >= 0; j--) {
                if (j == i) {
                    dp[j] = dp[j - 1] + triangle[i][j];
                } else if (j == 0) {
                    dp[j] = dp[j] + triangle[i][j];
                } else {
                    dp[j] = min(dp[j], dp[j - 1]) + triangle[i][j];
                }
            }
        }

        // The minimum path sum will be the minimum value in the last row
        return *min_element(dp.begin(), dp.end());
    }
};
