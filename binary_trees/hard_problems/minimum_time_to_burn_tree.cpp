    void findParent(Node*root,Node* &aim ,unordered_map<Node*,Node*>&parent,int target){
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int k=q.size();
            for(int i{0};i<k;i++){
                auto p=q.front();
                if(p->data==target){
                    aim=p;
                }
                if(p->left){
                    q.push(p->left);
                    parent[p->left]=p;
                }
                if(p->right){
                    q.push(p->right);
                    parent[p->right]=p;
                }
                q.pop();
            }
        }
    }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        int timer=0;
        Node* aim=new Node(-1);
        unordered_map<Node*,Node*>parent;
        findParent(root,aim,parent,target);
        unordered_map<Node*,bool>burned;
        queue<Node*>q;
        q.push(aim);
        burned[aim]=true;
        while(!q.empty()){
            int size=q.size();
            for(int i{0};i<size;i++){
                auto p=q.front();
                q.pop();
                if(p->left && !burned[p->left]){
                    q.push(p->left);
                    burned[p->left]=true;
                }
                if(p->right && !burned[p->right]){
                    q.push(p->right);
                    burned[p->right]=true;
                }
                if(parent[p] && !burned[parent[p]]){
                    q.push(parent[p]);
                    burned[parent[p]]=true;
                }
            }
            timer+=1;
        }
        return timer-1;
        
        
    }
