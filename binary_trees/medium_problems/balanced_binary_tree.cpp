#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
  struct * TreeNode left;
  struct * TreeNode right;
  int data;
  TreeNode(int val){
    data=val;
    left=NULL;
    right=NULL;
  }
}
int checker(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        int lh=checker(root->left);
       
        int rh=checker(root->right);
        if(lh==-1 || rh==-1){
            return -1;
        }
        if(abs(lh-rh)>1){ 
            return -1;
        };
        return max(lh,rh)+1;
}

    bool isBalanced(TreeNode* root) {
        return (checker(root)!=-1);
    }
int main(){
  return 0;
}
