#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5;
    int low = 1;
    int high = x;
    int ans;
    while (low < high)
    {
        int mid = (high + low) / 2;
        ans = mid;
        if ((mid * mid) > x)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    cout << ans << endl;

    return 0;
}