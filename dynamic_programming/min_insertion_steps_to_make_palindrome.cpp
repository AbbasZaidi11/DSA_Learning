class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        string rev=s;
        reverse(rev.begin(),rev.end());
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int mini=INT_MIN;
        for(int i{1};i<n+1;i++){
            for(int j{1};j<n+1;j++){
                if(s[i-1]==rev[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                mini=max(mini,dp[i][j]);
            }
        }
        if(mini==INT_MIN){
            return n;
        }
        return n-mini;
    }
};
