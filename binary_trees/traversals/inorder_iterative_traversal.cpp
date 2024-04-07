#include <bits/stdc++.h>
using namespace std;


struct Node{
struct Node*left;
struct Node*right;
int data;
   Node (int val){
     data=val;
 }  
}
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int>ans;
        if(!root){
            return ans;
        }
        stack<Node*>st;
        
        while(true){
            if(root!=NULL){
                st.push(root);
                root=root->left;
            }
            else{
                if(st.empty()){
                    break;
                }
                root=st.top();
                st.pop();
                ans.push_back(root->data);
                root=root->right;
            }
        }
        return ans;
    }

int main(){
return 0;
}
