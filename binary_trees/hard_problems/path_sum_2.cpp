    void recur(vector<vector<int>>&ans,vector<int>&temp,TreeNode*root,int targetSum,int sum){
        if(!root){
            return ;
        }
        sum=sum+root->val;
        temp.push_back(root->val);
         
        if(!root->right && !root->left && sum==targetSum){
            ans.push_back(temp);
        }
        recur(ans,temp,root->left,targetSum,sum);
        recur(ans,temp,root->right,targetSum,sum);
        temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        vector<int>temp;
        recur(ans,temp,root,targetSum,0);
        return ans;
    }
