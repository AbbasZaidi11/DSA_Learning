class Solution {
public:

    int recur(int x, int y , int n, int m,vector<vector<int>> &obstacleGrid,vector<vector<int>> &dp){
        if(x>=n || y>=m || obstacleGrid[x][y]==1 ){
            return 0;
        }
        if(x==n-1 && y==m-1){
            return 1;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        return dp[x][y]=recur(x+1,y,n,m,obstacleGrid,dp) + recur(x,y+1,n,m,obstacleGrid,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        //n-1 and m-1
        if(obstacleGrid[0][0]==1 || obstacleGrid[n-1][m-1]==1 ){
            return 0;
        }
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        return recur(0,0,n,m,obstacleGrid,dp);
    }
};
