    bool  dfs(int node,vector<int>adj[],vector<int>&visited,vector<int>&pathvisited){
        visited[node]=1;
        pathvisited[node]=1;
        
        for(auto a:adj[node]){
            //if the node is not visited
            if(!visited[a]){
                if(dfs(a,adj,visited,pathvisited)==true){
                    return true;
                }
                //if the node has been both visited and path visited
                
            }else if(pathvisited[a]){
                return true;
            }
        }
        pathvisited[node]=0;
        return false;
    }
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
        vector<int>visited(v,0);
        vector<int>pathvisited(v,0);
        for(int i{0};i<v;i++){
            if(visited[i]==0){
                bool ans=dfs(i,adj,visited,pathvisited);
                if(ans){
                    return true;
                }
            }
        }
        return false;
    }
