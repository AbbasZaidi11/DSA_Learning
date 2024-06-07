    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        queue<int>q;
        q.push(0);
        vector<int>accessed;
        accessed.resize(v);
        fill(accessed.begin(),accessed.end(),0);
        accessed[0]=1;
        vector<int>ans;
        ans.push_back(0);
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            for(auto k:adj[it]){
                if(accessed[k]==0){
                    q.push(k);
                    ans.push_back(k);
                    accessed[k]=1;
                }
            }
        }
        return ans;
        
    }
