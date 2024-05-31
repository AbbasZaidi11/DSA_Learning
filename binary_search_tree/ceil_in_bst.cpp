int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    int ans=-1;
    while(root){
        if(root->data==input){
            ans=input;
            return ans;
        }else if(root->data>input){
            ans=root->data;
            root=root->left;
        }else{
            root=root->right;
        }
    }
    return ans;
    
    // Your code here
}
