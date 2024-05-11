    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>inMap;
        for(int i{0};i<inorder.size();i++){
            inMap[inorder[i]]=i; 
            //mapping the positions of the inorder elements to calculate the elements lying on the
            //left and right of the array
        }
        TreeNode*root=partition(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inMap);
        return root;
    }
    TreeNode * partition(vector<int>&preorder,int preStart,int preEnd,vector<int>&inorder,int inStart,int inEnd,map<int,int>&inMap){
        if(preStart>preEnd || inStart>inEnd){return NULL;}
        TreeNode*root=new TreeNode(preorder[preStart]); 
        // since we already know that the root comes first in preorder array

        int inRoot=inMap[root->val];
        //we find out the position of the root element in inorder array
        int numsLeft=inRoot-inStart; 
        // element present to the left of the root element array will be the left element

        root->left=partition(preorder,preStart+1,preStart+numsLeft,inorder,inStart,inRoot-1,inMap);
        root->right=partition(preorder ,preStart+numsLeft+1,preEnd,inorder,inRoot+1,inEnd,inMap);
        return root;

    }
// if the tree contains duplicate elements then :
Node* builder(int in[], int pre[], int n, int preStart, int preEnd, int inStart, int inEnd) {
    if (preStart > preEnd || inStart > inEnd) {
        return NULL;
    }
    Node* root = new Node(pre[preStart]);
    int inroot = -1; // Initialize to -1
    for (int i = inStart; i <= inEnd; i++) {
        if (in[i] == pre[preStart]) {
            inroot = i;
            in[i] = -1; // Once used, mark it as -1
            break;
        }
    }
    int leftside = inroot - inStart; // Calculate leftside correctly
    root->left = builder(in, pre, n, preStart + 1, preStart + leftside, inStart, inroot - 1);
    root->right = builder(in, pre, n, preStart + leftside + 1, preEnd, inroot + 1, inEnd);
    return root;
}
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code her
        
        return builder(in,pre,n,0,n-1,0,n-1);
    }
