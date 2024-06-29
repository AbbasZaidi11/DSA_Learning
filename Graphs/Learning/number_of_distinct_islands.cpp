//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
void  dfs(vector<vector<int>>&grid,int i,int j,int li,int lj,int n,int m,vector<int>&res)

 {

     if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0)

     {

         return;

     }

res.push_back(i-li);

res.push_back(j-lj);

grid[i][j]=0;

dfs(grid,i-1,j,li,lj,n,m,res);

dfs(grid,i+1,j,li,lj,n,m,res);

dfs(grid,i,j-1,li,lj,n,m,res);

dfs(grid,i,j+1,li,lj,n,m,res);

 }

int countDistinctIslands(vector<vector<int>>& grid)

{

 set<vector<int>>st;

 int n=grid.size();

 int m=grid[0].size();

 for(int i=0;i<n;i++)

 {

     for(int j=0;j<m;j++)

     {

         if(grid[i][j]==1)

         {

             vector<int>res;

             dfs(grid,i,j,i,j,n,m,res);

            // cout<<res<<" ";

             st.insert(res);

         }

     }

 }

// cout<<endl;

return st.size();
}

};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends
