  vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(!root){
            return ans;
        }
        map<int,map<int,vector<int>>>nodes;
        
        queue<pair<Node*,pair<int,int>>>q;
        
        q.push({root,{0,0}});
        while(!q.empty()){
            auto t=q.front();
            q.pop();
            nodes[t.second.first][t.second.second].push_back(t.first->data);
            if(t.first->left){
                q.push({t.first->left,{t.second.first-1,t.second.second+1}});
            }
            if(t.first->right){
                q.push({t.first->right,{t.second.first+1,t.second.second+1}});
            }
        }
        for(auto a:nodes){
            for(auto k:a.second){
                ans.insert(ans.end(),k.second.begin(),k.second.end());
            }
        }
        return ans;
    }
