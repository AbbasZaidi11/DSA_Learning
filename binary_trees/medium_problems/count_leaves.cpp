#include <bits/stdc++.h>
using namespace std;
int countLeaves(Node* root)
{
  // Your code here
  if(!root){
      return 0;
  }
  if(!root->left && !root->right){
      return 1;
  }
  return countLeaves(root->left) + countLeaves(root->right);
  
}

int main(){
  return 0;
}
