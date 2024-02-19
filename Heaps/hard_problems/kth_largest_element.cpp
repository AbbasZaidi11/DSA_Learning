#include <bits/stdc++.h>
using namespace std;
class KthLargest
{
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int ft = 0;
    KthLargest(int k, vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
        {
            ft = k;
            return;
        }
        for (int i{0}; i < n; i++)
        {
            pq.push(nums[i]);
        }
        while (!pq.empty() && pq.size() > k)
        {
            pq.pop();
        }
        ft = k;
    }

    int add(int val)
    {
        pq.push(val);
        while (!pq.empty() && pq.size() > ft)
        {
            pq.pop();
        }
        if (pq.size() == 0)
        {
            return -1;
        }
        return pq.top();
    }
};
int main()
{
    return 0;
}