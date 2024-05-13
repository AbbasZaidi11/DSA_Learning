    void findparent(Node*root, unordered_map<Node*,Node*>&parent, int target){
        queue<Node*>q;
        q.push(root);
        Node*f=nullptr;
        while(!q.empty()){
            int k=q.size();
            for(int i{0};i<k;i++){
                auto p=q.front();
                q.pop();
               
                if(p->left){
                    parent[p->left]=p;
                    q.push(p->left);
                }
                if(p->right){
                    parent[p->right]=p;
                    q.push(p->right);
                }
            }
        }
    }
    Node* findTarget(Node*root,int target){
        if(!root){
            return NULL;
        }
        if(root->data==target){
            return root;
        }
        Node*left=findTarget(root->left,target);
        Node*right=findTarget(root->right,target);
        if(left){
            return left;
        } if(right){
            return right;
        }
        return NULL;
    }

    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        // return the sorted vector of all nodes at k dist
        vector<int>ans;
        
        unordered_map<Node*,Node*>parent;
        
        findparent(root,parent,target);
        
        Node*targetNode=findTarget(root,target);
        
        unordered_map<Node*,bool>visited;
        int distance=0;
        queue<Node*>q;
        q.push(targetNode);
        visited[targetNode]=true;
        while(!q.empty()){
            int size=q.size();
            if(distance==k){
                break;
            }
           distance++;
            for(int i{0};i<size;i++){
                auto p=q.front();
                q.pop();
                if(p->left && !visited[p->left]){
                    q.push(p->left);
                    visited[p->left]=true;
                }
                if(p->right && !visited[p->right]){
                    q.push(p->right);
                    visited[p->right]=true;
                }
                if(parent[p] && !visited[parent[p]]){
                    q.push(parent[p]);
                    visited[parent[p]]=true;
                }
            }
        }
        while(!q.empty()){
            Node*f=q.front();
            ans.push_back(f->data);
            q.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
