    vector<vector<int>> printGraph(int v, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>>ans;
        ans.resize(v);
        for(int i{0};i<edges.size();i++){
            ans[edges[i].first].push_back(edges[i].second);
            ans[edges[i].second].push_back(edges[i].first);
        }
        return ans;
        
    }
