#include <bits/stdc++.h>
using namespace std;

vector<int> arrayRankTransform(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, 0);
    vector<pair<int, int>> sorted;
    for (int i{0}; i < n; i++)
    {
        sorted.push_back({arr[i], i});
    }
    sort(sorted.begin(), sorted.end());
    int rank = 1;
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && sorted[i].first == sorted[i - 1].first)
        {
            ans[sorted[i].second] = rank - 1;
        }
        else
        {
            ans[sorted[i].second] = rank;
            rank += 1;
        }
    }
    return ans;
}
int main()
{
    return 0;
}