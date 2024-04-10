#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool f = true;
    int subtreesum(Node*root){
        if(!root){
            return 0;
        }
        int lh=subtreesum(root->right);
        int rh=subtreesum(root->left);
        if(root->data != lh+rh && (root->left || root->right) ){
            f=false;
        }
        return (root->data+lh+rh);
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         if(!root || (!root->left && !root->right)){
             return true;
         }
         subtreesum(root);
         return f;
    }
};
int main(){
  return 0;
}
