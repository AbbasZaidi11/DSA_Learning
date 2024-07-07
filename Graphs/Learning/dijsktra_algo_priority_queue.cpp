//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int v, vector<vector<int>> adj[], int s)
    {
        // Code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>ans(v,INT_MAX);
        ans[s]=0;
        pq.push({0,s});//distance and node
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            int dist=p.first;
            int node=p.second;
            for(auto a:adj[node]){
                int edgeWeight=a[1];
                int adjNode=a[0];
                
                if(ans[node]!=INT_MAX){
                    if(ans[adjNode]>dist+edgeWeight){
                        ans[adjNode]=dist+edgeWeight;
                        pq.push({ans[adjNode],adjNode});
                    }
                }
            }
        }
        return ans;
        
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends
