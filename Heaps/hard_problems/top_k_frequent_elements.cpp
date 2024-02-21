#include <bits/stdc++.h>
using namespace std;
vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> ans;
    int n = nums.size();
    unordered_map<int, int> mpp;
    for (int i{0}; i < n; i++)
    {
        mpp[nums[i]]++;
    }
    priority_queue<pair<int, int>> pq;
    for (auto a : mpp)
    {
        pair<int, int> temp;
        temp.first = a.second;
        temp.second = a.first;
        pq.push(temp);
    }
    while (!pq.empty() && k > 0)
    {
        pair<int, int> p = pq.top();
        ans.push_back(p.second);
        k--;
        pq.pop();
    }
    return ans;
}

int main()
{
    return 0;
}