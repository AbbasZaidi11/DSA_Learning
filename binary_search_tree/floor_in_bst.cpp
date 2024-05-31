    int floor(Node* root, int x) {
        // Code here
        if(!root){return -1;}
        int ans=-1;
        while(root){
            if(root->data==x){
                return x;
            }else if(root->data<x){
                ans=root->data;
                root=root->right;
            }else if(root->data>x){
                root=root->left;
            }
        }
        return ans;
    }
