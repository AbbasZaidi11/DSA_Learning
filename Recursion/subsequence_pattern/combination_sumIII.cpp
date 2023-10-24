#include <bits/stdc++.h>
using namespace std;
void recur(int pos, int n, int k, vector<int> &it, vector<int> &temp, vector<vector<int>> &ans)
{

    if (pos >= 9 || k == 0)
    {
        if (n == 0 && k == 0)
        {
            ans.push_back(temp);
        }
        return;
    }
    if (pos <= n)
    {
        temp.push_back(it[pos]);
        recur(pos + 1, n - it[pos], k - 1, it, temp, ans);
        temp.pop_back();
    }
    recur(pos + 1, n, k, it, temp, ans);
}
int main()
{
    return 0;
}