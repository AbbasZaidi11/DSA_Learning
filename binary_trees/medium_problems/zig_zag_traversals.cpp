#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        int flag=true;
        while(!q.empty()){
            int size=q.size();
            vector<int>vec;
            vec.resize(size);
            for(int i{0};i<size;i++){
                TreeNode*temp=q.front();
                q.pop();
                int index= (flag) ? i: (size-1-i);
                vec[index]=temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(vec);
            flag=!flag;
        }
        return ans;
    }
};
int main(){
  return 0;
}
