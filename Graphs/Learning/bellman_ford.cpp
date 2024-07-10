//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int v, vector<vector<int>>& edges, int s) {
        // Code here
        vector<int>distances(v,1e8);
        distances[s]=0;
        bool isNegCycle=false;

        for(int i{0};i<v;i++){
            for(int j{0};j<edges.size();j++){
                int ui=edges[j][0];
                int vi=edges[j][1];
                int weight=edges[j][2];
                if(distances[ui]!=1e8 && distances[vi]>distances[ui]+weight){
                    distances[vi]=distances[ui]+weight;
                    if(i==v-1){
                        isNegCycle=true;
                        break;
                    }
                }
            }
        }
        if(isNegCycle){
            return {-1};
        }
        return distances;

    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, m;
        cin >> N >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src;
        cin >> src;

        Solution obj;
        vector<int> res = obj.bellman_ford(N, edges, src);

        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
