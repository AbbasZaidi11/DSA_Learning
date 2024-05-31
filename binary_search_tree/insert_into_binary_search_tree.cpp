    TreeNode* insertIntoBST(TreeNode* root, int val) {
                TreeNode*insert=new TreeNode(val);

        if(!root){
            return insert;
        }
        TreeNode*prev=NULL;
        TreeNode*temp=root;
        while(temp){
            if(val>temp->val){
                prev=temp;
                temp=temp->right;
            }else{
                prev=temp;
                temp=temp->left;
            }
        }
        if(prev->val>val){
            prev->left=insert;
        }else{
            prev->right=insert;
        }
        return root;
        

    }
