#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>vec;
            for(int i{0};i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                vec.push_back(node->val);
            }
            ans.push_back(vec);
        }
        return ans;
    }

int main(){
  return 0;
}
