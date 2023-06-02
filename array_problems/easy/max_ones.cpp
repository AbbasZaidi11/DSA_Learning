#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int m = 4;
    vector<vector<int>> arr = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};

    int max_sum = 0;
    int c = 0;

    for (int i{0}; i < n; i++)
    {
        int sum = 0;
        for (int j{m - 1}; j >= 0; j--)
        {
            if (arr[i][j] == 1)
            {
                sum += 1;
            }
            else
            {
                break;
            }
        }
        if (sum > max_sum)
        {
            c = i;
            max_sum = sum;
        }
    }
    if (max_sum == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << c << endl;
        }

    return 0;
}