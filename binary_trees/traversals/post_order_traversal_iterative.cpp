#include <bits/stdc++.h>
using namespace std;
    vector<int> postOrder(Node* node) {
        // code here
        vector<int>ans;
        if(!node){
            return ans;
        }
        stack<Node*>st;
        Node*cur=node;
      
        while(cur!=NULL || !st.empty()){
            if(cur!=NULL){
                st.push(cur);
                cur=cur->left;
            }
            else{
                Node*temp=st.top()->right;
                if(temp==NULL){
                    temp=st.top();
                    st.pop();
                    ans.push_back(temp->data);
                    while(!st.empty() && temp==st.top()->right){
                        temp=st.top();
                        st.pop();
                        ans.push_back(temp->data);
                    }
                }
                else{
                    cur=temp;
                }
                
            }
        }
    }

int main(){
  return 0;
}
