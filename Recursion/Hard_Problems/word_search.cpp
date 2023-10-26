#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool recur(int i, int j, vector<vector<char>> &board, string &word, int n, int m, int k)
    {
        if (k == word.size())
        {
            return true;
        }
        if (i < 0 || j < 0 || i == n || j == m || board[i][j] != word[k])
        {
            return false;
        }
        char ch = board[i][j];
        board[i][j] = '#';
        bool op1 = recur(i + 1, j, board, word, n, m, k + 1);
        bool op2 = recur(i, j + 1, board, word, n, m, k + 1);
        bool op3 = recur(i - 1, j, board, word, n, m, k + 1);
        bool op4 = recur(i, j - 1, board, word, n, m, k + 1);
        board[i][j] = ch;
        return op1 || op2 || op3 || op4;
    }
    bool exist(vector<vector<char>> &board, string word)
    {
        int n = board.size();
        int m = board[0].size();
        for (int i{0}; i < n; i++)
        {
            for (int j{0}; j < m; j++)
            {
                if (board[i][j] == word[0])
                {
                    if (recur(i, j, board, word, n, m, 0) == true)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
int main()
{
    return 0;
}