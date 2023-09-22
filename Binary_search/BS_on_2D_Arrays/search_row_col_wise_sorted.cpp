#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}};
    int m = matrix.size();
    int n = matrix[0].size();
    int i = 0;
    int j = n - 1;
    int target = 5;
    int left = matrix[i][j];
    while (i < m && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            cout << "target found" << endl;
        }
        else if (matrix[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return 0;
}