class Solution {
public:
    bool bfs(int i,vector<vector<int>>&graph,vector<int>&color){
        color[i]=0;
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            for(auto a:graph[node]){
                if(color[a]==-1){
                    if(color[node]==1){
                        color[a]=0;
                    }else{
                        color[a]=1;
                    }
                    q.push(a);
                }else if(color[a]==color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);

        for(int i{0};i<n;i++){
            if(color[i]==-1){
                if(bfs(i,graph,color)==true){
                    continue;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
