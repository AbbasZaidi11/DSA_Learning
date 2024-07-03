//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int node,vector<int>&ans,vector<int>&visited,int v,vector<int>adj[],stack<int>&topo){
	    visited[node]++;
	    for(auto a:adj[node]){
	        if(!visited[a]){
	            dfs(a,ans,visited,v,adj,topo);
	        }
	    }
	    topo.push(node);
	    
	}
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    // code here
	    vector<int>ans;
	    vector<int>visited(v,0);
	    stack<int>topo;
	    for(int i{0};i<v;i++){
	        if(!visited[i]){
	            dfs(i,ans,visited,v,adj,topo);
	        }
	    }
	    while(!topo.empty()){
	        ans.push_back(topo.top());
	        topo.pop();
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends
