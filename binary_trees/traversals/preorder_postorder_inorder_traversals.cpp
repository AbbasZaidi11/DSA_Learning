#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<int>pre,ino,post;
    vector<vector<int>>ans;
    if(!root){
        return ans;
    }
    stack<pair<TreeNode*,int>>st;
    st.push({root,1});
    while(!st.empty()){
        auto it=st.top();
        st.pop();
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second=it.second+1;
            st.push(it);
            if(it.first->left){
                st.push({it.first->left,1});

            }
        }
        else if(it.second==2){
            ino.push_back(it.first->data);
            it.second=it.second+1;
            st.push(it);
            if(it.first->right){
                st.push({it.first->right,1});

            }
        }
        else{
            post.push_back(it.first->data);
        }
    }
        ans.push_back(ino);

    ans.push_back(pre);
    ans.push_back(post);
    return ans;
    
}
int main(){
  return 0;
}
