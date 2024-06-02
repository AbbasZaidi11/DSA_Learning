    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        if(!root){return NULL;}
        Node*ans=NULL;
        Node*temp=root;
        int key=x->data;
        int mini=INT_MAX;
        while(temp){
            if(temp->data>key){
                if(temp->data<mini){
                    mini=min(mini,temp->data);
                    ans=temp;
                }
                temp=temp->left;
            }else{
                temp=temp->right;
            }
        }
        return  ans;
    }
