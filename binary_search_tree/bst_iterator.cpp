class BSTIterator {
public:
    stack<TreeNode*>st;
    void pushAll(TreeNode*root,stack<TreeNode*>&st){
        while(root){
            st.push(root);
            root=root->left;
        }
    }
    BSTIterator(TreeNode* root) {
        pushAll(root,st);
    }
    
    int next() {
        TreeNode*topper=st.top();
        st.pop();
        pushAll(topper->right,st);
        return topper->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};
