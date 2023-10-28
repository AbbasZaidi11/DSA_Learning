#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(int i, int j, vector<string> &vec, int n)
    {
        int row = i;
        int col = j;
        while (row >= 0 && col >= 0)
        {
            if (vec[row][col] == 'Q')
            {
                return false;
            }
            row--;
            col--;
        }
        row = i;
        col = j;
        while (row < n && col >= 0)
        {
            if (vec[row][col] == 'Q')
            {
                return false;
            }
            row++;
            col--;
        }
        row = i;
        col = j;
        while (col >= 0)
        {
            if (vec[row][col] == 'Q')
            {
                return false;
            }
            col--;
        }
        return true;
    }
    void recur(int i, int j, vector<vector<string>> &ans, vector<string> &vec, int n)
    {
        if (n == j)
        {
            ans.push_back(vec);
            return;
        }
        for (int row{0}; row < n; row++)
        {
            if (isValid(row, j, vec, n) == true)
            {
                vec[row][j] = 'Q';
                recur(row, j + 1, ans, vec, n);
                vec[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> vec;
        vec.resize(n);
        string str = string(n, '.');
        for (int i{0}; i < vec.size(); i++)
        {
            vec[i] = str;
        }
        recur(0, 0, ans, vec, n);
        return ans;
    }
};

int main()
{
    return 0;
}