class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //{{r,c},t}
        queue<pair < pair<int,int>,int > >q;

        vector<vector<int>>visited;
        for(int i{0};i<n;i++){
            vector<int>temp(m,0);
            visited.push_back(temp);
        }
        for(int i{0};i<n;i++){
            for(int j{0};j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    visited[i][j]=1;
                }
            }
        }
        int tm=0;
        int drow[]={-1,0,+1,0};
        int dcol[]={0,+1,0,-1};
        while(!q.empty()){
            int r=q.front().first.first;//x-coordinate
            int c=q.front().first.second;//y-coordinate
            int time=q.front().second;
            tm=max(tm,time);
            q.pop();
            for(int i{0};i<4;i++){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && visited[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    q.push({{nrow,ncol},time+1});   
                    visited[nrow][ncol]=1;
                }
            }
        }
        for(int i{0};i<n;i++){
            for(int j{0};j<m;j++){
                if(grid[i][j]==1 && visited[i][j]==0){
                    return -1;
                }
            }
        }
        return tm;
    }
};
