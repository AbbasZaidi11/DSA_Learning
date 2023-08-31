#include <bits/stdc++.h>
using namespace std;
bool checker(vector<int> boards, int k, int mid)
{
    int sum = 0;
    int count = 1;
    for (int i{0}; i < boards.size(); i++)
    {
        if (sum + boards[i] > mid)
        {
            count++;
            sum = boards[i];
        }
        else
        {
            sum = sum + boards[i];
        }
    }
    if (count > k)
    {
        return false;
    }
    return true;
}
int main()
{
    vector<int> boards = {5, 5, 5, 5};
    int k = 2;
    int low = *max_element(boards.begin(), boards.end());
    int long long high = accumulate(boards.begin(), boards.end(), 0);
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (checker(boards, k, mid) == true)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low;

    return 0;
}