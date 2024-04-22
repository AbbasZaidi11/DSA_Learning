    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(!root){
            return ans;
        }
        map<int,map<int,vector<int>>>nodes;
        queue< pair< Node*,pair<int,int> > >q;
        q.push({root,{0,0}});
        while(!q.empty()){
            int size=q.size();
            for(int i{0};i<size;i++){
        
                auto k=q.front();
                int x=k.second.first;
                int y=k.second.second;
                
                nodes[k.second.first][k.second.second].push_back(k.first->data);
                if(k.first->left){
                    q.push({k.first->left,{x-1,y+1}});
                }
                if(k.first->right){
                    q.push({k.first->right,{x+1,y+1}});
                }
                q.pop();
            }
        }
        for (auto a : nodes) {
    for (auto k : a.second) {
        ans.push_back(k.second.front()); // Pushing the first element of the vector
        break;
    }
}

        return ans;
        
    }
