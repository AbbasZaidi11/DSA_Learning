class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    unordered_map<Node*,int>mpp;
    int getMaxSum(Node *root) 
    {
        // Add your code here

        if(!root){
            return 0;
        }
        if(mpp[root]) return mpp[root];
        int withnode=root->data;
        //take your grandchildrens
        if(root->left){
            withnode+=getMaxSum(root->left->left);
            withnode+=getMaxSum(root->left->right);
        }
        if(root->right){
            withnode+=getMaxSum(root->right->left);
            withnode+=getMaxSum(root->right->right);
        }
        int withoutnode=getMaxSum(root->right)+getMaxSum(root->left);
        mpp[root]=max(withoutnode,withnode);
        return max(withoutnode,withnode);
        
    }
};
