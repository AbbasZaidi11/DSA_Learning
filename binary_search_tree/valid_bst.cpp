bool isValid(TreeNode*root,long mini,long maxi){
        if(!root){return true;}
        if(root->val<=mini || root->val>=maxi){
            return false;
        }
        return isValid(root->left,mini,root->val) && isValid(root->right,root->val,maxi);

    }
    bool isValidBST(TreeNode* root) {
        if(!root){return true;}
        return isValid(root,LONG_MIN,LONG_MAX);
    }
