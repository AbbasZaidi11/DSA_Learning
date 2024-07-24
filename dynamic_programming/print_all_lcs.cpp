void backtrack(const vector<vector<int>>& dp, const string& s, const string& t, int i, int j, string current, set<string>& subsequences,unordered_set<string>&visited) {
    if (i == 0 || j == 0) {
        //the lengths of the substrings 
        reverse(current.begin(), current.end());
        subsequences.insert(current);
        return;
    }
        string state = to_string(i) + "," + to_string(j) + "," + current; //to_string because an integer ca
        //can be converted into  a string but not the other way around 
        if (visited.count(state)) return;
        visited.insert(state);


    if (s[i - 1] == t[j - 1]) {
        backtrack(dp, s, t, i - 1, j - 1, current + s[i - 1], subsequences,visited);
    } else {
        if (dp[i - 1][j] >= dp[i][j - 1]) {
            backtrack(dp, s, t, i - 1, j, current, subsequences,visited);
        }
        if (dp[i][j - 1] >= dp[i - 1][j]) {
            backtrack(dp, s, t, i, j - 1, current, subsequences,visited);
        }
    }
}

vector<string> all_longest_common_subsequences(string s, string t) {
    vector<string> ans;
    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s[i - 1] == t[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    set<string> subsequences;
    unordered_set<string>visited;
    backtrack(dp, s, t, n, m, "", subsequences,visited);

    for (const auto& subseq : subsequences) {
        ans.push_back(subseq);
    }

    return ans;
}
};
