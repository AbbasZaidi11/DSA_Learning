    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root){return NULL;}
        if(root->val == key){
            return helper(root);
        }
        TreeNode *temp=root;
        while(temp){
            if(temp->val>key){
                if(temp->left && temp->left->val==key){
                    temp->left=helper(temp->left);
                    break;
                }else{
                    temp=temp->left;
                }
            }
            else{
                if(temp->right && temp->right->val==key){
                    temp->right=helper(temp->right);
                    break;
                }else{
                    temp=temp->right;
                }
            }
        }
        
        return root;
    }
    TreeNode*helper(TreeNode*root){
        if(!root->left){
            return root->right;
        }else if(!root->right){
            return root->left;
        }
        TreeNode*leftChild=root->left;
        TreeNode*lastLeft=findLastLeft(root->right);
        lastLeft->left=leftChild;
        return root->right;
    }
    TreeNode*findLastLeft(TreeNode*root){
        if(!root->left){
            return root;
        }
        return findLastLeft(root->left);
    }
