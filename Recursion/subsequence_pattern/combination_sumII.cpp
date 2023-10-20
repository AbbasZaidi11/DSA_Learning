#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void recur(int pos, int n, vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &temp)
    {
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }

        for (int i{pos}; i < n; i++)
        {
            if (candidates[i] > target)
            {
                break;
            }
            if (i > pos)
            {
                if (candidates[i] == candidates[i - 1])
                {
                    continue;
                }
            }
            temp.push_back(candidates[i]);
            recur(i + 1, n, candidates, target - candidates[i], ans, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        recur(0, candidates.size(), candidates, target, ans, temp);
        return ans;
    }
};
int main()
{
    return 0;
}