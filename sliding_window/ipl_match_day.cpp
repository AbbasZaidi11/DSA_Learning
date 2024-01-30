#include <bits/stdc++.h>
using namespace std;
vector<int> max_of_subarrays(vector<int> arr, int n, int k)
{
    // your code herev
    vector<int> ans;
    deque<int> dq;
    for (int i{0}; i < n; i++)
    {
        if (!dq.empty() && dq.front() == (i - k))
        {
            dq.pop_front();
        }
        while (!dq.empty() && arr[i] > arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= (k - 1))
        {
            ans.push_back(arr[dq.front()]);
        }
    }
    return ans;
}

int main()
{
    return 0;
}