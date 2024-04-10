
bool isSameTree(TreeNode* r1, TreeNode* r2) {
        if(!r1 && !r2){
            return true;
        }
        if(!r1){
            return false;
        }
        if(!r2){
            return false;
        }
        if(r1->val != r2->val){
            return false;
        }
        return (isSameTree(r1->left,r2->left) && isSameTree(r1->right,r2->right));
        

    }
