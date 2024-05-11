    int isSumProperty(Node *root)
    {
     // Add your code here
        if(!root){
            return 1;
        }
        if(!root->left && !root->right){
            return 1;
        }
        int sum=0;
        if(root->left){
            sum=sum+root->left->data;
        }
        if(root->right){
            sum=sum+root->right->data;
        }
        if(sum==root->data){
            return isSumProperty(root->left) && isSumProperty(root->right);
        }else{
            return 0;
        }
        
    }
