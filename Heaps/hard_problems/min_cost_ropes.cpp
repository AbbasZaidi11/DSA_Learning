#include <bits/stdc++.h>
using namespace std;
long long minCost(long long arr[], long long n)
{
    // Your code here
    if (n == 1)
    {
        return 0;
    }
    priority_queue<long long, vector<long long>, greater<long long>> ls;
    for (long long i{0}; i < n; i++)
    {
        ls.push(arr[i]);
    }
    long long ans = 0;
    while (!ls.empty())
    {
        long long curr = ls.top();
        ans = ans + ls.top();
        ls.pop();
        if (!ls.empty())
        {
            curr = curr + ls.top();
            ans = ans + ls.top();
            ls.pop();
            if (ls.empty())
            {
                return ans;
            }
            ls.push(curr);
        }
    }
    return ans;
}

int main()
{
    return 0;
}
