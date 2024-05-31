    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root){return NULL;}
        TreeNode*temp=root;
        while(temp){
            if(temp->val==val){
                return temp;
            }
            else if(temp->val>val){
                temp=temp->left;
            }else{
                temp=temp->right;
            }
        }
        return NULL;
    }
