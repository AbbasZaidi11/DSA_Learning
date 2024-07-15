class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        priority_queue< pair<int,pair<int,int>> ,vector< pair<int,pair<int,int>> >,greater< pair< int,pair<int,int> > >>q;
        q.push({0,{0,0}});
        int n=grid.size();
        vector<vector<int>>visited(n,vector<int>(n,0));
        vector<int>delrow={+1,0,-1,0};
        vector<int>delcol={0,+1,0,-1};
        int mini=INT_MIN;
        visited[0][0]=1;
        while(!q.empty()){
            auto p=q.top();
            q.pop();
            int x=p.second.first;
            int y=p.second.second;
            mini=max(grid[x][y],mini);
            if(x==n-1 && y==n-1){break;}
            for(int i{0};i<4;i++){
                int nrow=delrow[i]+x;
                int ncol=delcol[i]+y;
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<n && visited[nrow][ncol]==0){
                    visited[nrow][ncol]=1;
                    q.push({ grid[nrow][ncol],{nrow,ncol} });
                }
            }
        }
        return mini;
    }
};
