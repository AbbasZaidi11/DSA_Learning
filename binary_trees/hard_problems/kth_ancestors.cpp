void recur(vector<int>&ancestors,int k,Node*root,int node,int &ans){
    if(!root){
        return ;
    }
    ancestors.push_back(root->data);
    if(root->data==node){
        int n=ancestors.size();
        for(int i{n-1};i>=0;i--){
            k--;
            if(k<0){
                ans=ancestors[i];
                break;
            }
        }
        return ;
    }
    recur(ancestors,k,root->left,node,ans);
    recur(ancestors,k,root->right,node,ans);
    ancestors.pop_back();
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    if(!root){
        return -1;
    }
    vector<int>ancestors;
    int ans=-1;
    recur(ancestors,k,root,node,ans);
    return ans;
    
}
