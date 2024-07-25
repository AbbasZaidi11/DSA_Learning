//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int i,int j,int arr[],vector<vector<int>>&dp){
        if(i>=j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int temp_ans=INT_MAX;
        for(int k=i;k<j;k++){
            temp_ans=min(temp_ans,( solve(i,k,arr,dp)+solve(k+1,j,arr,dp) + arr[i-1] * arr[j] * arr[k])  );
        }
        return dp[i][j]=temp_ans;
    }
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int ans=solve(1,n-1,arr,dp);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends
