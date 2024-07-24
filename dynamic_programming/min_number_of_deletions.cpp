//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends


int minDeletions(string s1, int n) { 
    //complete the function here 
    string s2=s1;
    reverse(s2.begin(),s2.end());
    int len=INT_MIN;
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    for(int i{1};i<n+1;i++){
        for(int j{1};j<n+1;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
            len=max(len,dp[i][j]);
        }
    }
    if(len==INT_MIN){
        return n;
    }
    return n-len;
    
    
    
    
} 
