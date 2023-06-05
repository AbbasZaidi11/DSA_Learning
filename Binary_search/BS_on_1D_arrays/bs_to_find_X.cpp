#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int k = 4;
    int low = 0;
    int high = n - 1;
    int count = 0;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == k)
        {
            cout << mid << endl;
            count++;
            break;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (count == 0)
    {
        cout << -1 << endl;
    }
    return 0;
}
