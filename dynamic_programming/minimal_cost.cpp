//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int recur(int i,int n,int k,vector<int>&dp,vector<int>&height){
        if(i==n-1){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int ans=INT_MAX;
        for(int ind{i+1};ind<=i+k;ind++){
            if(ind>=n){
                break;
            }
            int temp=recur(ind,n,k,dp,height)+abs(height[i]-height[ind]);
            ans=min(ans,temp);
        }
        return dp[i]=ans;
    }
    int minimizeCost(vector<int>& height, int n, int k) {
        // Code here
        vector<int>dp(n+1,-1);
        int ans=recur(0,n,k,dp,height);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends
