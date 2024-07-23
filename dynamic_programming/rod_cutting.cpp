//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int recur(int price[],int n,vector<vector<int>>&dp,int length){
        if(length==0 || n==0){
            return 0;
        }
        if(dp[n][length]!=-1){
            return dp[n][length];
        }
        if(length-(n)>=0){
            return dp[n][length]=max(price[n-1]+recur(price,n,dp,length-(n)),recur(price,n-1,dp,length));
        }
        return dp[n][length]=recur(price,n-1,dp,length);
        
        
    }
    int cutRod(int price[], int n) {
        //code here
        int length=n;
        vector<vector<int>>dp(n+1,vector<int>(length+1,-1));
        int ans=recur(price,n,dp,length);
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
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
