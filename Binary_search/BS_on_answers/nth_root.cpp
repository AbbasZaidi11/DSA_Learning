#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 2;
    int m = 16;
    int low = 0;
    int high = m;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (pow(mid, n) == m)
        {
            cout << mid << endl;
            break;
        }
        else if (pow(mid, n) < m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << -1 << endl;
    return 0;
}