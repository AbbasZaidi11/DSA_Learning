    void inorder(TreeNode*root,int &count, int k,int &ans){
        if(!root){return ;}
        inorder(root->left,count,k,ans);
        if(count==k){
            ans=root->val;
        }
        count+=1;
        inorder(root->right,count,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
       if(!root){return 0;} 
       //remember that if we take the inorder traversal of a binary search tree,we always get the sorted array
       int count=1;
       int ans=-1;
        inorder(root,count,k,ans);
        return ans;

    }
