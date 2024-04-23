vector<int> leftView(Node *root)
{
   // Your code here
                  vector<int>ans;
        if(!root){
            return ans;
        }
        map<int,Node*>mpp;
        queue< pair < Node*,int> >q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            for(int i{0};i<size;i++){
                auto k=q.front();
                q.pop();
                int x=k.second;
                if(mpp.find(k.second)==mpp.end()){
                    mpp[k.second]=k.first;
                }
                if(k.first->left){
                    q.push({k.first->left,{x+1}});
                }
                if(k.first->right){
                    q.push({k.first->right,{x+1}});
                }
            }
        }
        for(auto a:mpp){
            ans.push_back(a.second->data);
        }
        return ans;

   
}
