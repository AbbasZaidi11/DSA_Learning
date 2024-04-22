#include <bits/stdc++.h>
using namespace std;
vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>ans;
        if(!root){
            return ans;
        }
        queue<pair<Node*,int>>q;
        
        map<int,Node*>mpp;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            for(int i{0};i<size;i++){
                auto k=q.front();
                mpp[k.second]=k.first;
                int x=k.second;
                if(k.first->left){
                    q.push({k.first->left,x-1});
                }
                if(k.first->right){
                    q.push({k.first->right,x+1});
                }
                q.pop();
            }
        }
        for(auto a:mpp){
            ans.push_back(a.second->data);
        }
        return ans;
    }
