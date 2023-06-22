#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {5, 6, 8, 9, 6, 5, 5, 6};
    int n = 8;
    int x = 10;
    pair<int, int> ans;
    int floor = INT_MIN;
    int ceil = INT_MAX;
    int floor_count = 0;
    int ceil_count = 0;
    for (int i{0}; i < n; i++)
    {
        if (arr[i] > floor && arr[i] <= x)
        {
            floor = arr[i];
            floor_count++;
        }
        if (arr[i] < ceil && arr[i] >= x)
        {
            ceil = arr[i];
            ceil_count++;
        }
    }
    ans.first = floor;
    ans.second = ceil;
    if (floor_count == 0)
    {
        ans.first = -1;
    }
    if (ceil_count == 0)
    {
        ans.second = -1;
    }
    cout << ans.first << " " << ans.second << endl;

    return 0;
}