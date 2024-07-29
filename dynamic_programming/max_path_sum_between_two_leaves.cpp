int recur(TreeNode<int>*root,int &ans,int &count){
    if(!root){return 0;}
    if(!root->left && !root->right){
        count++;
    }
    int lh=recur(root->left,ans,count);
    int rh=recur(root->right,ans,count);
    int temp=root->val+max(lh,rh);
    int cp=lh+rh+root->val;
    ans=max(ans,cp);
    return temp;
}
long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    if(!root){return -1;}
    int ans=INT_MIN;
    int count=0;
    int k=recur(root,ans,count);
    if(count<=1){return -1;}
    return ans;

}
