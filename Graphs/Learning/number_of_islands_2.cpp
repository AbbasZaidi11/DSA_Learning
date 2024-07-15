//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class DisjointSet
{
public:
    vector<int> rank;
    vector<int> parent;
    DisjointSet(int n)
    {
        rank.resize(n + 1);
        fill(rank.begin(), rank.end(), 0);
        parent.resize(n + 1);
        for (int i{0}; i < n + 1; i++)
        {
            parent[i] = i;
        }
    }
    int findPar(int u)
    {
        if (u == parent[u])
        {
            return u;
        }
        return findPar(parent[u]);
    }
    void unionByRank(int u, int v)
    {
        int ult_u = findPar(u);
        int ult_v = findPar(v);
        if (ult_u == ult_v)
        {
            return;
        }
        int parentRank_u = rank[ult_u];
        int parentRank_v = rank[ult_v];
        if (parentRank_u < parentRank_v)
        {
            parent[ult_u] = ult_v;
        }
        else if (parentRank_u > parentRank_v)
        {
            parent[ult_v] = ult_u;
        }
        else
        {
            parent[ult_v] = ult_u;
            rank[ult_u]++;
        }
    }
};

class Solution {
  public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        // code here
        DisjointSet ds(n*m);
        int vis[n][m];
        memset(vis,0,sizeof vis);
        int cnt=0;
        vector<int>ans;
        
        for(auto it:operators){
            int row=it[0];
            int col=it[1];
            if(vis[row][col]==1){
                ans.push_back(cnt);//if already visited we simply add it to the ans
                continue;
            }
            vis[row][col]=1;
            
            //we are marking only the queries as visited,meaning only the islands
            //because only the queries given to us are the dry lands rest are water
            cnt++;
            vector<int>delrow={+1,0,-1,0};
            vector<int>delcol={0,+1,0,-1};
            
            for(int i{0};i<4;i++){
                int nrow=delrow[i]+row;
                int ncol=delcol[i]+col;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==1){
                    int nodeNo=row*m+col;
                    int adjNode=nrow*m+ncol;
                    if(ds.findPar(nodeNo)!=ds.findPar(adjNode)){
                        cnt--;
                        ds.unionByRank(nodeNo,adjNode);
                    }
                }
            }
            ans.push_back(cnt);
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends
