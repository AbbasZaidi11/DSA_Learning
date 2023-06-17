#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int k = 6;
    int arr[n] = {6, 9, 4, 2};
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++;
    int count = 0;
    for (int i{0}; i < n; i++)
    {
        xr = xr ^ arr[i];
        int x = xr ^ k;
        count = count + mpp[x];
        mpp[x]++;
    }
    return 0;
}