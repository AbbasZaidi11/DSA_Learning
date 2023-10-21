#include <bits/stdc++.h>
using namespace std;
void recur(int n, vector<string> &ans, string &s, int i)
{
    if (i == n)
    {
        ans.push_back(s);
        return;
    }
    if (s[i - 1] == '0')
    {
        s[i] = '0';
        recur(n, ans, s, i + 1);
        s[i] = '1';
        recur(n, ans, s, i + 1);
    }
    if (s[i - 1] == '1')
    {
        s[i] = '0';
        recur(n, ans, s, i + 1);
    }
}
vector<string> generateString(int N)
{
    string s = string(N, 0);
    // Write your code here.
    s[0] = '1';
    vector<string> ans;
    int i = 1;
    recur(N, ans, s, i);
    s[0] = '0';
    recur(N, ans, s, i);
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    return 0;
}