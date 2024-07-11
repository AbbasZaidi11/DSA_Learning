    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        //return the city with the smallest number of cities that are reachable through some path and whose distance is at most distanceThreshold
        //if there are multiple such cities,return the city with the greatest number
        vector<vector<int>>adj(n,vector<int>(n,INT_MAX));
        for(int i{0};i<edges.size();i++){
            adj[edges[i][0]][edges[i][1]]=edges[i][2];
            adj[edges[i][1]][edges[i][0]]=edges[i][2];

        }
        
    for(int i = 0; i < n; i++) {
        adj[i][i] = 0;
    }
        for(int var{0};var<n;var++){ //bellman-ford algorithm
            for(int i{0};i<n;i++){
                for(int j{0};j<n;j++){
                    if(adj[i][var]!=INT_MAX && adj[var][j]!=INT_MAX){
                        adj[i][j]=min(adj[i][j],adj[i][var]+adj[var][j]);
                    }
                }
            }
        }
        vector<int>ans(n,0);
        int maxi=INT_MAX;
        for(int i{0};i<n;i++){
            for(int j{0};j<n;j++){
                if(i!=j && adj[i][j]<=distanceThreshold){
                    ans[i]++;
                }
            }
        }
        int indi=-1;
        int max_freq=INT_MAX;;
        for(int i{0};i<ans.size();i++){
            if(max_freq>=ans[i]){
                max_freq=ans[i];
                indi=i;
            }
        }
        return indi;

    }
