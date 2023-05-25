#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    int arr[n] = {12, 35, 1, 10, 34, 1};
    int max_2 = -1;
    int max_1 = arr[0];
    // OPTIMAL APPROACH
    for (int i{1}; i < n; i += 1)
    {
        if (arr[i] > max_1)
        {
            max_2 = max_1;
            max_1 = arr[i];
        }
        if (max_1 > arr[i] && max_2 < arr[i])
        {
            max_2 = arr[i];
        }
    }
    cout << max_2 << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > max_1)
    //     {
    //         max_1 = arr[i];
    //     }
    // }
    // for (int i{0}; i < n; i++)
    // {
    //     if (arr[i] > max_2 && arr[i] < max_1)
    //     {
    //         max_2 = arr[i];
    //     }
    // }
    // cout << max_2 << endl;

    return 0;
}
