class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        int n=graph.size();

        vector<int>indegree(n);
        vector<vector<int>>adj(n);

        for(int i{0};i<n;i++){
            indegree[i]=graph[i].size();
            for(auto a:graph[i]){
                adj[a].push_back(i);
            }
        }
                queue<int>q;

        for(int i{0};i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            ans.push_back(p);
            for(auto a:adj[p]){
                indegree[a]--;
                if(indegree[a]==0){
                    q.push(a);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
