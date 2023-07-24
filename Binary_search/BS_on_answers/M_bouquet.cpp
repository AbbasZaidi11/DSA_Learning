#include <bits/stdc++.h>
using namespace std;
int checker(vector<int> arr, int middle, int m, int k)
{
    int bouquet = 0;
    int count = 0;
    for (int i{0}; i < arr.size(); i++)
    {
        if (arr[i] <= middle)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count == k)
        {
            bouquet += 1;
            count = 0;
        }
    }
    if (bouquet >= m)
    {
        return 1;
    }
    return -1;
}
int highest(vector<int> vec)
{
    sort(vec.begin(), vec.end());
    return (vec[vec.size() - 1]);
}
int lowest(vector<int> vec)
{
    sort(vec.begin(), vec.end());
    return (vec[0]);
}
int main()
{

    vector<int> bloomDay = {7, 7, 7, 7, 12, 7, 7};
    int m = 2;
    int k = 3;
    int long long na = m * k;
    int long long no = bloomDay.size();
    if (na > no)
    {
        cout << -1 << endl;
    }
    int low = lowest(bloomDay);
    int high = highest(bloomDay);

    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int get = checker(bloomDay, mid, m, k);
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