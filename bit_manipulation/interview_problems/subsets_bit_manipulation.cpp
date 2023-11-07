#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i{0}; i <= ((1 << n) - 1); i++)
        {
            vector<int> subset;
            for (int bit{0}; bit <= n - 1; bit++)
            {
                if (i & (1 << bit))
                {
                    subset.push_back(nums[bit]);
                }
            }
            ans.push_back(subset);
        }
        return ans;
    }
};
int main()
{
    return 0;
}