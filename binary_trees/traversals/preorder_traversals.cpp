#include <bits/stdc++.h>
using namespace std;
void inorderTraversal(Node* root,vector<int>&ans) {
            if (root != nullptr) {
              ans.push_back(root->data);
                inorderTraversal(root->left,ans);
                inorderTraversal(root->right,ans);
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
