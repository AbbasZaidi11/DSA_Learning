#include <bits/stdc++.h>
using namespace std;
bool checker(vector<int> nums, int mid, int k)
{
    int long long sum = 0;
    int count = 1;
    for (int i{0}; i < nums.size(); i++)
    {
        if (sum + nums[i] > mid)
        {
            count++;
            sum = nums[i];
        }
        else
        {
            sum = sum + nums[i];
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
    vector<int> nums = {2, 3, 1, 1, 1, 1, 1};
    int k = 5;
    int low = *max_element(nums.begin(), nums.end());
    int long long high = accumulate(nums.begin(), nums.end(), 0);
    for (int mid{low}; mid <= high; mid++)
    {
        if (checker(nums, mid, k) == true)
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