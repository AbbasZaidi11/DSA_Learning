 void recur(vector<int>&path , TreeNode *root,int k,int &count){
        if(!root){
            return ;
        }
        path.push_back(root->val);
        recur(path,root->left,k,count);
        recur(path,root->right,k,count);
        long long  temp_sum=0;
        long long size=path.size();
        for(long long i{size-1};i>=0;i--){
            temp_sum+=path[i];
            if(temp_sum==k){
                count+=1;
            }
        }
        path.pop_back();
        
    }
    int pathSum(TreeNode* root, int k) {
                vector<int>path;
        if(!root){
            return 0;
        }
        int count=0;
        recur(path,root,k,count);
        return count;

    }
