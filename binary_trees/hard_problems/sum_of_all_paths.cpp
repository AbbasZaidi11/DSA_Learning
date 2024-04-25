    void recur (Node*root,int height, int &maxheight, int sum ,int &maxsum){
        if(!root){
            if(height>maxheight){
                maxsum=sum;
                maxheight=max(height,maxheight);
            }
            else if(height==maxheight){
                maxsum=max(maxsum,sum);
            }
            return;
        }
        sum+=root->data;
        recur(root->left,height+1,maxheight,sum,maxsum);
        recur(root->right,height+1,maxheight,sum,maxsum);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        if(!root){
            return 0;
        }
        int maxheight=0;
        int maxsum=0;
        recur(root,0,maxheight,0,maxsum);
        return maxsum;
    }
