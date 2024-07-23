//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	   int recur(vector<int>&coins,int amount,int n,vector<vector<int>>&dp){
        if(amount==0 && n==0){//if the amount is already 0 we don't need to take anymore coins
            return 0;
        }
        if(n==0) {
            //if all the elements have already been processed ,we can only make hypothetical assumptions 
            return INT_MAX-1;
        }
        if(dp[n][amount]!=-1){
            return dp[n][amount];
        }
        if(amount>=coins[n-1]){
            int take=min(1+recur(coins,amount-coins[n-1],n,dp),recur(coins,amount,n-1,dp));
            return dp[n][amount]=take;
        }else{
            int not_take=recur(coins,amount,n-1,dp);
            return dp[n][amount]=not_take;
        }
    }
	int minCoins(vector<int> &coins, int n, int amount) 
	{ 
	    // Your code goes here

        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans=recur(coins,amount,n,dp);
        if(ans==INT_MAX || ans==INT_MAX-1){return -1;}
        return ans;

	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        vector<int> coins(m);
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
