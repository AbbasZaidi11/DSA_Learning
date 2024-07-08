    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][0]==1){return -1;}
        //distance and coordinates
        queue<pair<int,pair<int,int>>>pq;
        vector<int>delrow={-1,+1,-1,+1,0,+1,-1,0};
        vector<int>delcol={-1,+1,+1,-1,+1,0,0,-1};
        pq.push({0,{0,0}});//distance and coordinates 
        int ans=INT_MAX;
        while(!pq.empty()){
            auto p=pq.front();
            pq.pop();
            int dist=p.first;
            int row=p.second.first;
            int col=p.second.second;
            if(row==n-1 && col==m-1){
                ans=min(ans,dist);
            }
            for(int i{0};i<delrow.size();i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && grid[nrow][ncol]==0){
                    pq.push({dist+1,{nrow,ncol}});
                    grid[nrow][ncol]=1;
                }
            }
        }
        if(ans==INT_MAX){return -1;}
        return ans+1;


    }
