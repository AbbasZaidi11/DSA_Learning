# include <bits/stdc++.h>
using namespace std;
struct Node{
struct Node*left;
struct Node*right;
int data;
Node(int val){
  data=val;
}
}
vector<int> preOrder(Node* root)
    {
        //code here
        vector<int>ans;
        if(!root){
            return ans;
        }
        stack<Node*>st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            ans.push_back(root->data);
            if(root->right){
                st.push(root->right);
            }
            if(root->left){
                st.push(root->left);
            }
        }
        return ans;
}
int main(){
  return 0;
}
