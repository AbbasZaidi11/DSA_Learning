//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int recur(int coins[],int n,int sum,vector<vector<long long int>>&dp){
        if(sum==0){
            return 1;
        }
        if(n==0){
            return 0;
        }
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        if(coins[n-1]<=sum){
            long long int take=recur(coins,n,sum-coins[n-1],dp)+recur(coins,n-1,sum,dp);
            return dp[n][sum]=take;
        }else{
            long long int not_take=recur(coins,n-1,sum,dp);
            return dp[n][sum]=not_take;
        }
    }
    long long int count(int coins[], int n, int sum) {

        // code here.
        vector<vector<long long int>>dp(n+1,vector<long long int>(sum+1,-1));
        long long int ans=recur(coins,n,sum,dp);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends
