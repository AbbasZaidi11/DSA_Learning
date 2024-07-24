//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int n=str1.size();
	    int m=str2.size();
	    int maxi=INT_MIN;
	    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
	    for(int i{1};i<n+1;i++){
	        for(int j{1};j<m+1;j++){
	            if(str1[i-1]==str2[j-1]){
	                dp[i][j]=1+dp[i-1][j-1];
	            }else{
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	            }
	            maxi=max(maxi,dp[i][j]);
	        }
	    }
	    int deletions=n-maxi;
	    int insertions=m-maxi;
	    return insertions+deletions;
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
