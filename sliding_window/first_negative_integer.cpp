#include <bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int n, long long int k)
{

    vector<long long> ans;
    queue<long long> dq;
    for (int i{0}; i < n; i++)
    {
        if (A[i] < 0)
        {
            dq.push(i);
        }
        while (!dq.empty() && dq.front() <= (i - k))
        {
            dq.pop();
        }
        if ((i + 1) >= k)
        {
            if (dq.empty())
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(A[dq.front()]);
            }
        }
    }
    return ans;
}
int main()
{
    return 0;
}