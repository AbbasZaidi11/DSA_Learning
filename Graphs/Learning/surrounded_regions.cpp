    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();

        queue<pair<int,int>>q;
        for(int i{0};i<n;i++){
            for(int j{0};j<m;j++){
                if(board[i][j]=='O'){
                    if(i==0 || i==n-1 || j==0 || j==m-1){
                        q.push({i,j});
                    }
                }
            }
        }
        vector<int>delc={-1,0,+1,0};
        vector<int>delr={0,+1,0,-1};        
        while(!q.empty()){
            auto k=q.front();
            q.pop();
            board[k.first][k.second]='2';
            for(int i{0};i<4;i++){
                int nrow=k.first+delr[i];
                int ncol=k.second+delc[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && board[nrow][ncol]=='O'){
                    q.push({nrow,ncol});
                }
            }
        }
        for(int i{0};i<n;i++){
            for(int j{0};j<m;j++){
                if(board[i][j]=='O'){board[i][j]='X';}
            }
        }
        for(int i{0};i<n;i++){
            for(int j{0};j<m;j++){
                if(board[i][j]=='2'){
                    board[i][j]='O';
                }
            }
        }
    }
