/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int recur(TreeNode*root,int &ans){
        if(!root){return 0;}
        int lh=recur(root->left,ans);
        int rh=recur(root->right,ans);
        int node=root->val;
        int child=node;
        if(lh>0){
            child+=lh;
        }
        if(rh>0){
            child+=rh;
        }
        ans=max(ans,child);
        if(max(lh,rh)<0){
            return root->val;
        }
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        int k=recur(root,ans);
        return ans;
    }
};
