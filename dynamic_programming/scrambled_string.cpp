class Solution {
public:
    unordered_map<string,bool>dp;
    bool solve(string a,string b){
        if(a==b){return true;}
        if(a.length()<=1){
            return a==b;
        }
        string key=a+" "+b;
        if(dp.find(key)!=dp.end()){
            return dp[key];
        }
        int n=a.length();
        for(int i{1};i<n;i++){
            if ((solve(a.substr(0, i), b.substr(0, i)) && solve(a.substr(i), b.substr(i))) ||
                (solve(b.substr(0, i), a.substr(n-i)) && solve(b.substr(i), a.substr(0, n-i)))) {
                    return dp[key]=true;
            
        }
        }
        return dp[key]=false;
    }
    bool isScramble(string s1, string s2) {
        if(s1.length()!=s2.length()){
            return false;
        }
        if(s1==s2){return true;}
        dp.clear();
        bool ans=solve(s1,s2);
        return ans;
    }
};
