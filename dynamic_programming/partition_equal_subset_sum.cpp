//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
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
        int first_sum=total_sum/2;
        vector<vector<int>>dp(n+1,vector<int>(first_sum+1,0));
        
        for(int i{0};i<n+1;i++){
            for(int j{0};j<first_sum+1;j++){
                if(j==0){
                    dp[i][j]=1;
                }
            }
        }
        for(int i{1};i<n+1;i++){
            for(int j{1};j<first_sum+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][first_sum];
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
