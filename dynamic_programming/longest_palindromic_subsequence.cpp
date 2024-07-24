//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string a) {
        //code here
        int n=a.size();
        string b=a;
        reverse(b.begin(),b.end());
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int ans=INT_MIN;
        for(int i{1};i<n+1;i++){
            for(int j{1};j<n+1;j++){
                if(a[i-1]==b[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                ans=max(ans,dp[i][j]);
            }
        }
        if(ans==INT_MIN){
            return 0;
        }
        return ans;

    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
