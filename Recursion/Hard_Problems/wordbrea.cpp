class Solution {
public:
    unordered_map<int, bool> memo;
    
    bool dfs(string& s, vector<string>& wordDict, int start) {
        if (start == s.length()) return true;
        if (memo.find(start) != memo.end()) return memo[start];
        
        for (const string& word : wordDict) {
            if (s.substr(start, word.length()) == word) {
                if (dfs(s, wordDict, start + word.length())) {
                    return memo[start] = true;
                }
            }
        }
        
        return memo[start] = false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        memo.clear();
        return dfs(s, wordDict, 0);
    }
};
