#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void recur(int pos, int n, vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans)
    {
        ans.push_back(temp);
        for (int i{pos}; i < n; i++)
        {
            if (i > pos)
            {
                if (nums[i] == nums[i - 1])
                {
                    continue;
                }
            }
            temp.push_back(nums[i]);
            recur(i + 1, n, nums, temp, ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<int> temp = {};
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        recur(0, n, nums, temp, ans);

        return ans;
    }
};
int main()
{
    return 0;
}