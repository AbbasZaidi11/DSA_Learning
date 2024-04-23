class Solution {
public:
    bool recur(TreeNode*root1,TreeNode*root2){
        if(!root1 && !root2){
            return true;
        }
        if(!root1 || !root2){
            return false; 
        }
        if(root1->val != root2->val){
            return false;
        }
        return recur(root1->right,root2->left) && recur(root1->left,root2->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        return recur(root->left,root->right);
    }
};
