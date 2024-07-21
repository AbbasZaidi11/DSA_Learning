//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int recur(int first_sum,int total_sum,int n,int arr[],vector<vector<int>>&dp){
        if(first_sum==total_sum){
            return 1;
        }
        else if(n==0 || first_sum>total_sum){
            return 0;
        }
        if(dp[n][total_sum]!=-1){
            return dp[n][total_sum];
        }
        if(first_sum+arr[n-1]<=total_sum-arr[n-1]){
            int taken=recur(first_sum+arr[n-1],total_sum-arr[n-1],n-1,arr,dp) || 
                        recur(first_sum,total_sum,n-1,arr,dp);
            return dp[n][total_sum]=taken;
        }
        return dp[n][total_sum]=recur(first_sum,total_sum,n-1,arr,dp);
    }
    int equalPartition(int n, int arr[])
    {
        // code here
        int total_sum=0;
        for(int i{0};i<n;i++){
            total_sum+=arr[i];
        }
        if(total_sum%2){
            return 0;
        }
        int first_sum=0;
        vector<vector<int>>dp(n+1,vector<int>(total_sum+1,-1));
        return recur(first_sum,total_sum,n,arr,dp);
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
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends
