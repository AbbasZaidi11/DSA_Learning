#include <bits/stdc++.h>
using namespace std;
int numberOfSubarrays(vector<int> &nums, int k)
{
    int n = nums.size();
    for (int i{0}; i < n; i++)
    {
        if (nums[i] % 2 != 0)
        {
            nums[i] = 1;
        }
        else
        {
            nums[i] = 0;
        }
    }
    unordered_map<int, int> m;
    int sum = 0, cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            cnt++;
        }
        if (m.find(sum - k) != m.end())
        {
            cnt += m[sum - k];
        }
        m[sum]++;
    }
    return cnt;
}

int main()
{
    return 0;
}