//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
int minDifference(int arr[], int n)  { 
	    // Your code goes here
	int total_sum=0;
	for(int i{0};i<n;i++){
		total_sum+=arr[i];
	}
	int start_sum=total_sum/2;
    vector<vector<int>>dp(n+1,vector<int>(total_sum+1,0));
	    dp[0][0]=1;
		for(int j{1};j<n+1;j++){
			for(int k{0};k<total_sum+1;k++){
				if(arr[j-1]<=k){
					dp[j][k]=dp[j-1][k] || dp[j-1][k-arr[j-1]];
				}else{
					dp[j][k]=dp[j-1][k];
				}
			}
		}
		int ans=INT_MAX;
		for(int i{0};i<=start_sum;i++){
		    if(dp[n][i]==1){
		        //sum of s1==i
		        int rem=(total_sum-i);
		        ans=min(ans,abs(rem-i));
		    }
		}
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
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends
