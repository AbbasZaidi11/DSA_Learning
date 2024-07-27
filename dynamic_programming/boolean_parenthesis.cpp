//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    // Initialize the 3D array to -1
    int solve(int i,int j,string &s,bool istrue,vector<vector<vector<int>>>&dp){
         if(i>j){
            return 0;
        }
        if(i==j){
            if(istrue){
                return s[i]=='T';
            }else{
                return s[i]=='F';
            }
        }
        if(dp[i][j][istrue]!=-1){
            return dp[i][j][istrue];
        }
        int ans=0;
        for(int k{i+1};k<j;k+=2){
            int lt;
            if(dp[i][k-1][true]==-1){
                lt=solve(i,k-1,s,true,dp);
                dp[i][k-1][true]=(lt);

            }else{
                lt=dp[i][k-1][true];
            }
            lt=(lt)%1003;
            int lf;
            if(dp[i][k-1][false]==-1){
                lf=solve(i,k-1,s,false,dp);
                dp[i][k-1][false]=lf;
            }else{
                lf=dp[i][k-1][false];
            }
            lf=lf%1003;
            int rt;
            if(dp[k+1][j][true]==-1){
                rt=solve(k+1,j,s,true,dp);
                dp[k+1][j][true]=rt;
            }else{
                rt=dp[k+1][j][true];
            }
            rt=rt%1003;
            int rf;
            if(dp[k+1][j][false]==-1){
                rf=solve(k+1,j,s,false,dp);
                dp[k+1][j][false]=rf;
            }else{
                rf=dp[k+1][j][false];
            }
            rf=rf%1003;
            if(s[k]=='|'){
                if(istrue){
                     ans+=(lt*rf+lt*rt+rt*lf);
                }else{
                    ans+=(rf*lf);
                }
            }
            else if(s[k]=='&'){
                if(istrue){
                    ans+=(lt*rt);
                }else{
                    ans+=(lt*rf+lf*rt+rf*lf);
                }
            }else if(s[k]=='^'){
                if(istrue){
                    ans+=(lt*rf + lf*rt);
                }else{
                    ans+=(lt*rt + lf*rf);
                }
            }
        }
        return dp[i][j][istrue]=(ans)%1003;
    }
    int countWays(int n, string s){
        // code here
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(n+1, vector<int>(2,-1)));
        int ans=solve(0,n-1,s,true,dp);
        return (ans)%1003;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.countWays(n, s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
