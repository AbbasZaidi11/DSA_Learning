class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i{0};i<n;i++){
            for(int j{0};j<m;j++){
                if(grid[i][j]==1){
                    if(i==0 || j==0 || i==n-1 || j==m-1){
                        q.push({i,j});
                        grid[i][j]=0;
                    }
                }
            }
        }
        vector<int>delrow={-1,0,+1,0};
        vector<int>delcol={0,-1,0,+1};
        while(!q.empty()){
            auto k=q.front();
            q.pop();
            for(int i{0};i<4;i++){
                int nrow=delrow[i]+k.first;
                int ncol=delcol[i]+k.second;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1){
                    q.push({nrow,ncol});
                    grid[nrow][ncol]=0;
                }
            }
        }
        int ans=0;
        for(int i{0};i<n;i++){
            for(int j{0};j<m;j++){
                if(grid[i][j]==1){
                    ans+=1;
                }
            }
        }
        return ans;
    }
};
