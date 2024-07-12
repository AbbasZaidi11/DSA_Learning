//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	int findParent(int x,vector<int>&parent){
	    if(parent[x]==x){
	        return x;
	    }
	    return findParent(parent[x],parent);
	}
	
    int spanningTree(int v, vector<vector<int>> adj[])
    {
        // code here
        vector< pair < int,pair<int,int> > >vec;
        for(int i{0};i<v;i++){
            for(auto a:adj[i])//ith node{
            {
                int node=i;
                int adjNode=a[0];
                int wt=a[1];
                vec.push_back({wt,{node,adjNode}});
            }
        }
        int mswt=0;
        sort(vec.begin(),vec.end());
        vector<int>parent(v);
        vector<int>rank(v,0);
        for(int i{0};i<v;i++){
            parent[i]=i;
        }
        for(auto it:vec){
            int wt=it.first;
            int u=it.second.first;
            int v=it.second.second;
            int parent_u=findParent(u,parent);
            int parent_v=findParent(v,parent);
            if(parent_u!=parent_v){
                mswt+=wt;
                if(rank[parent_u]>rank[parent_v]){
                    parent[parent_v]=parent_u;
                }else if(rank[parent_u]<rank[parent_v]){
                    parent[parent_u]=parent_v;
                }else{
                    parent[parent_v]=parent_u;
                    rank[parent_u]++;
                }
            }else{
                continue;
            }
        }
        return mswt;

        
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
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends
