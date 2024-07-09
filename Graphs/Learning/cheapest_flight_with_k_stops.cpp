//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
      int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(int i{0};i<flights.size();i++){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
            //destination node and price
        }
        queue<pair<int,pair<int,int>>>pq;
        
        pq.push({0,{src,0}});
        //steps , node and cost
        vector<int>visited(n,1e9);
        visited[src]=0;
        while(!pq.empty()){
            auto p=pq.front();
            pq.pop();

            int distance=p.second.second;
            int node=p.second.first;
            int steps=p.first;
            if(steps>k){continue;}
            for(auto a:adj[node]){
                int adjNode=a.first;
                int edgeW=a.second;
                if(visited[adjNode]>distance+edgeW && steps<=k){
                    pq.push({steps+1,{adjNode,edgeW+distance}});
                    visited[adjNode]=edgeW+distance;
                }
            }
        }
        if(visited[dst]==1e9){
            return -1;
        }
        return visited[dst];
    }

    
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n; cin>>n;
        int edge; cin>>edge;
        vector<vector<int>> flights;
        
        for(int i=0; i<edge; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            flights.push_back(temp);
        }
        
        int src,dst,k;
        cin>>src>>dst>>k;
        Solution obj;
        cout<<obj.CheapestFLight(n,flights,src,dst,k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
