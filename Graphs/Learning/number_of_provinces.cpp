    void bfs(int vertex,vector<vector<int>>&isConnected,vector<int>&visited){
        queue<int>q;
        q.push(vertex);
        visited[vertex]=1;
        while(!q.empty()){
            int k=q.front();
            q.pop();
            for(int i{0};i<isConnected[k].size();i++){
                if(i==k){continue;}
                if(isConnected[k][i] && !visited[i]){
                    visited[i]++;
                    q.push(i);
                }
            }
            
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>visited(n,0);
        //apply bfs
        int provinces=0;
        
        for(int i{0};i<n;i++){
            if(!visited[i]){
                bfs(i,isConnected,visited);
                provinces+=1;
            }
        }
        return provinces;
        
    }
