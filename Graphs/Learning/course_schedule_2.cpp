class Solution {
public:
  
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>ans;
        vector<vector<int>>adj(numCourses);
        for(int i{0};i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int>indegree(numCourses,0);
        for(int i{0};i<numCourses;i++){
            for(auto a:adj[i]){
                indegree[a]++;
            }
        }
        queue<int>q;
        for(int i{0};i<indegree.size();i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto a:adj[node]){
                indegree[a]--;
                if(indegree[a]==0){
                    q.push(a);
                }
            }
        }
        if(ans.size()!=numCourses){
            return {};
        }
        return ans;
    }
};
