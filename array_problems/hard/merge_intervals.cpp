#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<vector<int>> ans;
    for (int i{0}; i < intervals.size(); i++)
    {
        if (ans.empty() || intervals[i][0] > ans.back()[1])
        {
            ans.push_back(intervals[i]);
        }
        else
        {
            ans.back()[1] = max(intervals[i][1], ans.back()[1]);
        }
    }

    return 0;
}