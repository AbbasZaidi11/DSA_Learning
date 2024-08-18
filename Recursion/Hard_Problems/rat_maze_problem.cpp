//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void recur(vector<string>&ans,int i,int j,int n,int m,string temp,vector<vector<int>>&mat){
           if(i>=n || j>=m || i<0 || j<0){
            return ;
        }
          if(mat[i][j]!=1){
            return ;
        }
        if(i==n-1 && j==m-1){
            ans.push_back(temp);
            return ;
        }
      
      
        //up
        mat[i][j]=0;
        temp.push_back('U');
        recur(ans,i-1,j,n,m,temp,mat);
        temp.pop_back();
        //down
        temp.push_back('D');
        recur(ans,i+1,j,n,m,temp,mat);
        temp.pop_back();
        //left
        temp.push_back('L');
        recur(ans,i,j-1,n,m,temp,mat);
        temp.pop_back();
        //right
        temp.push_back('R');
        recur(ans,i,j+1,n,m,temp,mat);
        temp.pop_back();
        mat[i][j]=1;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string>ans;
        int n=mat.size();
        int m=mat[0].size();
        string temp="";
        recur(ans,0,0,n,m,temp,mat);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
