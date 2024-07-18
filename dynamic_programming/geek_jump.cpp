//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int recur(vector<int>&height,int i,vector<int>&dp){
        if(i==0){
            return 0;
        }
        if(dp[i]!=-1){return dp[i];}
        
        int left=recur(height,i-1,dp)+abs(height[i]-height[i-1]);
        int right=INT_MAX;
        if(i>1){
            right=recur(height,i-2,dp)+abs(height[i]-height[i-2]);
        }
        return dp[i]=min(left,right);
    }
    int minimumEnergy(vector<int>& height, int n) {
        // Code her
        vector<int>dp(n+1,-1);
    
        return recur(height,n-1,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends
