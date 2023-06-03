#include <bits/stdc++.h>
using namespace std;
// GEEKS FOR GEEKS
int main()
{
    int n = 3;
    int m = 3;
    vector<vector<int>> mat = {{3, 30, 38}, {44, 52, 54}, {57, 60, 69}};
    int x = 62;

    int i = 0;
    int j = m - 1;
    int c = 0;
    while (i < n && j >= 0)
    {
        if (mat[i][j] == x)
        {
            cout << 1 << endl;
            c++;
            break;
        }
        if (mat[i][j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if (c == 0)
    {
        cout << 0 << endl;
    }

    return 0;
}