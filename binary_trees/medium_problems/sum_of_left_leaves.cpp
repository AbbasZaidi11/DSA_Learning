#include <bits/stdc++.h>
using namespace std;
bool leaf(TreeNode*root){
    if(!root){
        return false;
    }
    if(!root->right && !root->left){
        return true;
    }
    return false;
}
void inorder(TreeNode*root,int &ans){
    if(!root){
        return ;
    }
    if(root->left && leaf(root->left)){
        ans+=root->left->val;
    }
    inorder(root->left,ans);
    inorder(root->right,ans);
}

    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        if(!root){
            return ans;
        }
        inorder(root,ans);
        return ans;
       
        
    }
};
int main(){
  return 0;
}
