//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
        int cnt=1;
        dp[0][0]=1;//empty subset with sum equal to 1
       for(int i = 0; i < n; ++i) {
            if(arr[i] == 0) {
                cnt *= 2;
                dp[i+1][0] = cnt;
            } else {
                dp[i+1][0] = dp[i][0];
            }
        }
        
         for(int i{1};i<n+1;i++){
            for(int j{1};j<sum+1;j++){
                if(arr[i-1]<=j){ 
                    dp[i][j]=dp[i][j]+(dp[i-1][j-arr[i-1]] + dp[i-1][j])%1000000007;
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
        
        
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
