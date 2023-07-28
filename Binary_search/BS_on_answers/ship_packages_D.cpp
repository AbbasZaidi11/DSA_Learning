#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> vec, int middle, int threshold, int n)
{
    int counter = 1;
    int load = 0;
    for (int i{0}; i < vec.size(); i++)
    {
        if (vec[i] + load > middle)
        {
            load = vec[i];
            counter++;
        }
        else
        {
            load += vec[i];
        }
    }
    cout << "for middle = " << middle << " days are " << counter << endl;
    if (counter > threshold)
    {
        return -1;
    }

    return 1;
}
int main()
{
    vector<int> weights = {1, 2, 3, 1, 1};
    int days = 4;
    int ans = -1;
    int long long n = weights.size();
    sort(weights.begin(), weights.end());
    int long long low = *max_element(weights.begin(), weights.end());
    int long long high = accumulate(weights.begin(), weights.end(), 0);
    while (low <= high)
    {
        int long long mid = low + (high - low) / 2;
        int get = fun(weights, mid, days, n);
        if (get == 1)
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}