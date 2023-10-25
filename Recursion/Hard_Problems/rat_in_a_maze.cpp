#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void recur(int i, int j, vector<vector<int>> &m, int n, vector<string> &ans, string &temp)
    {
        if (i == n - 1 && j == n - 1)
        {
            ans.push_back(temp);
            return;
        }

        if (i != n - 1 && m[i + 1][j] == 1)
        {
            temp.push_back('D');
            m[i][j] = 0;
            recur(i + 1, j, m, n, ans, temp);
            m[i][j] = 1;
            temp.pop_back();
        }
        if (j != n - 1 && m[i][j + 1] == 1)
        {
            temp.push_back('R');
            m[i][j] = 0;
            recur(i, j + 1, m, n, ans, temp);
            m[i][j] = 1;
            temp.pop_back();
        }
        if (i != 0 && m[i - 1][j] == 1)
        {
            temp.push_back('U');
            m[i][j] = 0;
            recur(i - 1, j, m, n, ans, temp);
            m[i][j] = 1;
            temp.pop_back();
        }
        if (j != 0 && m[i][j - 1] == 1)
        {
            temp.push_back('L');
            m[i][j] = 0;
            recur(i, j - 1, m, n, ans, temp);
            m[i][j] = 1;
            temp.pop_back();
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<string> ans;
        if (m[n - 1][n - 1] == 0)
        {
            return ans;
        }
        if (m[0][0] == 0)
        {
            return ans;
        }
        string temp = "";
        recur(0, 0, m, n, ans, temp);
        return ans;
    }
};

int main()
{
    return 0;
}