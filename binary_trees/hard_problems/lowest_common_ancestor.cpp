 Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here
       if(!root || root->data==n1 || root->data==n2){
           return root;
       }
       
       Node*left=lca(root->left,n1,n2);
       Node*right=lca(root->right,n1,n2);
       if(!left){
           return right;
       }
       if(!right){
           return left;
       }
       return root;
    }
