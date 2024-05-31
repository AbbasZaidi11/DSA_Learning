     int minValue(Node* root) {
        // Code here
        if(!root){return -1;}
        Node*temp=root;
        int ans=-1;
        while(temp){
            ans=temp->data;
                temp=temp->left;
            
        }
        return ans;
    }
