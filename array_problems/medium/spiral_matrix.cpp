#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;
    int m = 3;
    int k = 4;
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans;
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    while (top <= bottom && left <= right)
    {
        for (int i{left}; i <= right; i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;

        for (int i{top}; i <= bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i{right}; i >= left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i{bottom}; i >= top; i--)
            {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    cout << ans[k - 1] << endl;

    return 0;
}