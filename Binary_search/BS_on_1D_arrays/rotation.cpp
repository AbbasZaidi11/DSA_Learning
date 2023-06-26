#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {5, 1, 2, 3, 4};
    int low = 0;
    int high = arr.size() - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[low] <= arr[high])
        {
            ans = min(ans, arr[low]);
            break;
        }
        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            ans = min(ans, arr[mid]);
        }
    }
    cout << ans << endl;

    return 0;
}