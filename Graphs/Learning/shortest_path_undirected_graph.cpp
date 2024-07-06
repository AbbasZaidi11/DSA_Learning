//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int n,int m, int src){
        // code here
        vector<int>ans(n,-1);
        vector<vector<int>>adj(n);
        
        for(int i{0};i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        queue<pair<int,int>>q;
        q.push({src,0});
        vector<int>vis(n,0);
        vis[src]++;
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            int node=p.first;
            int dist=p.second;
            ans[node]=dist;
            
            for(auto a:adj[node]){
                if(vis[a]==0){
                    q.push({a,dist+1});
                    vis[a]++;
                }else{
                    if(ans[a]>dist+1){
                        q.push({a,dist+1});
                    }
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends
