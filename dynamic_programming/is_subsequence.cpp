class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n==0){
            return true;
        }
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int maxi=INT_MIN;
        for(int i{1};i<n+1;i++){
            for(int j{1};j<m+1;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                maxi=max(maxi,dp[i][j]);
            }
        }
        if(maxi==INT_MIN){
            return false;
        }
            if(maxi==n){
                return true;
            }
            return false;

    }
};
