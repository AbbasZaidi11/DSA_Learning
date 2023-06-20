#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 8, 10, 11, 12, 19};
    int n = 7;
    int x = 5;
    int low = 0;
    int high = n - 1;
    int store = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            store = mid;
            break;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {

            store = mid;
            low = mid + 1;
        }
    }
    cout << store << endl;
    return 0;
}