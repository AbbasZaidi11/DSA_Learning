#include <bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    int n = nums.size();
    for (int i{0}; i < n; i++)
    {
        pq.push(nums[i]);
    }
    int ans = -1;
    while (!pq.empty() && k > 0)
    {
        ans = pq.top();
        pq.pop();
        k--;
    }
    return ans;
}

int main()
{
    return 0;
}