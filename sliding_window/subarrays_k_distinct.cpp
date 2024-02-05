#include <bits/stdc++.h>
using namespace std;
int count(vector<int> nums, int k)
{
    unordered_map<int, int> mpp;
    int i = 0;
    int j = 0;
    int n = nums.size();
    int ans = 0;
    while (i < n)
    {
        mpp[nums[i]]++;
        while (mpp.size() > k)
        {
            mpp[nums[j]]--;
            if (mpp[nums[j]] == 0)
            {
                mpp.erase(nums[j]);
            }
            j++;
        }
        ans += (j - i + 1); // At most k distinct integers
        i++;
    }
    return ans;
}
int subarraysWithKDistinct(vector<int> &nums, int k)
{
    int ans = count(nums, k - 1) - count(nums, k);
    return ans;
}

int main()
{
    return 0;
}