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
