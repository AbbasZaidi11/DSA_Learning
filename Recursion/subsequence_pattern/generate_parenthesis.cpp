#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve(int n, int open, int close, string &op, vector<string> &ans)
    {
        if (open == n && close == n)
        {
            ans.push_back(op);
        }
        if (open != n)
        {
            string op1 = op + "(";
            solve(n, open + 1, close, op1, ans);
        }
        if (open > close)
        {
            string op2 = op + ")";
            solve(n, open, close + 1, op2, ans);
        }
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        int close = 0;
        int open = 0;
        string op = "";
        solve(n, open, close, op, ans);
        return ans;
    }
};
int main()
{
    return 0;
}