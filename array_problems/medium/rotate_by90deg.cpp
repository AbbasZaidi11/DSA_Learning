#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    for (int i{0}; i <= n - 2; i++)
    {
        for (int j{i + 1}; j <= n - 1; j++)
        {
            swap(vec[i][j], vec[j][i]);
        }
    }
    // sort(vec.rbegin(), vec.rend());
    reverse(vec.begin(), vec.end());
    // Therefore, the key difference between the two functions is that sort rearranges the elements based on their values, while reverse simply reverses their order.
    // Additionally, sort can be used to sort the vector in either ascending or descending order,
    // whereas reverse only changes the order of the elements without regard to their values.

    for (auto it : vec)
    {
        for (auto x : it)
        {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
// vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// int n = vec.size();
// int arr[n][n];
// for (int i{0}; i < n; i++)
// {
//     for (int j{0}; j < n; j++)
//     {
//         arr[(n - 1) - j][i] = vec[i][j];
//     }
// }
// for (int i{0}; i < n; i++)
// {
//     for (int j{0}; j < n; j++)
//     {
//         cout << arr[i][j] << " ";
//     }
//     cout << "\n";
// }
