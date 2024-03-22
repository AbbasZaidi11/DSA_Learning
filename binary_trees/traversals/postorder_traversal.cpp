#include <bits/stdc++.h>
using namespace std;
void inorderTraversal(Node* root,vector<int>&ans) {
            if (root != nullptr) {
                inorderTraversal(root->left,ans);
                inorderTraversal(root->right,ans);
               ans.push_back(root->data);
            }
        }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>ans;
        inorderTraversal(root,ans);
        return ans;
        
    }
int main(){
  return 0;
}
