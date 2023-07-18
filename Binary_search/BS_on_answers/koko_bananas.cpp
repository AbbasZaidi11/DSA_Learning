#include <bits/stdc++.h>
using namespace std;

int long long time_calc(int a, vector<int> &piles)
{
    int long long total_time = 0;
    for (int i{0}; i < piles.size(); i++)
    {
        total_time += ceil(double(piles[i]) / double(a));
    }
    return total_time;
}

int Solve(int n, vector<int> &piles, int h)
{
    sort(piles.begin(), piles.end());
    int maxi = piles[n - 1];
    int low = 1;
    int high = maxi;
    int k = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int long long tt = time_calc(mid, piles);
        if (tt > h)
        {
            low = mid + 1;
        }
        else
        {
            k = mid;
            high = mid - 1;
        }
    }
    return k;
}
int main()
{
    int n = 4;
    vector<int> vec = {3, 6, 7, 11};
    int h = 8;
    int output = Solve(n, vec, h);
    cout << output << endl;
}
