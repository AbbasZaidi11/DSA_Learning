#include <bits/stdc++.h>
using namespace std;

/// GREEDY
int main()
{
    int a[] = {-1, -2, 4, -6, 5, 7};
    int n = 6;
    int b[] = {6, 3, 4, 0};
    int m = 4;
    int x = 8;
    map<int, int> mpp;
    vector<pair<int, int>> vec;
    for (int i{0}; i < n; i += 1)
    {
        mpp[a[i]]++;
    }
    for (int j{0}; j < m; j += 1)
    {
        int rem = x - b[j];
        if (mpp[rem] != 0)
        {
            vec.push_back({rem, b[j]});
            mpp[rem]--;
        }
    }
    sort(vec.begin(), vec.end());
    for (auto it : vec)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}
// int left = 0;
// int right = n - 1;
// int sum = 5;
// while (left < right)
// {
//     if (arr[left] + arr[right] == sum)
//     {
//         cout << "YES" << endl;
//         break;
//     }
//     if (arr[left] + arr[right] > sum)
//     {
//         right--;
//     }
//     if (arr[left] + arr[right] < sum)
//     {
//         left++;
//     }
// }