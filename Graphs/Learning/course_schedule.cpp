class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
        vector<int>indegree(numCourses,0);
        vector<vector<int>>adj(numCourses);
        for(int i{0};i<prerequisites.size();i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        for(int i{0};i<numCourses;i++){
            for(auto a:adj[i]){
                indegree[a]++;
            }
        }
        queue<int>q;
        for(int i{0};i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>ans;
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
        return ans.size()==numCourses;

    }
};
