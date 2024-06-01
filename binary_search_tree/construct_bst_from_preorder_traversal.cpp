    TreeNode*helper(vector<int>&preorder,int start,int end){
        if(start>end){
            return NULL;
        }
        TreeNode*root=new TreeNode(preorder[start]);
        int indi=-1;
        for(int i{start};i<=end;i++){
            if(preorder[start]<preorder[i]){
                indi=i;
                break;
            }
        }
        if(indi!=-1){
            root->left=helper(preorder,start+1,indi-1);
            root->right=helper(preorder,indi,end);
        }
        else{
            root->left=helper(preorder,start+1,end);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0){return NULL;}
        int n=preorder.size();
        TreeNode*root=helper(preorder,0,n-1);
        return root;
    }
