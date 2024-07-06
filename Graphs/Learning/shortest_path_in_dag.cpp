          void dfs(int node,stack<int>&st,vector<int>&visited,vector<vector<pair<int,int>>>&adj){
         visited[node]++;
         for(auto a:adj[node]){
             int v=a.first;
             if(!visited[v]){
                 dfs(v,st,visited,adj);
             }
         }
         st.push(node);
     }
     vector<int> shortestPath(int n,int m, vector<vector<int>>& edges){
        // code here
        vector<int>ans(n,INT_MAX);
        vector<vector<pair<int,int>>>adj(n);
        for(int i{0};i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int w=edges[i][2];
            adj[u].push_back({v,w});
        }
        vector<int>visited(n,0);
        stack<int>st;
        for(int i{0};i<n;i++){
            if(!visited[i]){
                dfs(i,st,visited,adj);
            }
        }
        ans[0]=0;
        while(!st.empty()){
            int node=st.top();
            st.pop();
        if (ans[node] != INT_MAX) {  // Process only if the node is reachable
            for (auto a : adj[node]) {
                int v = a.first;
                int wt = a.second;
                if (ans[v] > (wt + ans[node])) {
                    ans[v] = wt + ans[node];
                }
            }
        }
        }
        for(int i{0};i<ans.size();i++){
            if(ans[i]==INT_MAX){
                ans[i]=-1;
            }
        }
        return ans;
        
        
    }
