#include <bits/stdc++.h>
using namespace std;
int taskScheduler(string tasks, int n, int t)
{
    // Write your code here
    unordered_map<char, int> mpp;
    for (char c : tasks)
    {
        mpp[c]++;
    }
    priority_queue<int> pq;

    for (auto a : mpp)
    {
        pq.push(a.second);
    }
    int ans = 0;
    while (!pq.empty())
    {
        int temp = 0;
        vector<int> tp;
        for (int i{0}; i < t + 1; i++)
        {
            if (!pq.empty())
            {
                tp.push_back(pq.top() - 1);
                pq.pop();
                temp++;
            }
        }
        for (auto a : tp)
        {
            if (a)
            {
                pq.push(a);
            }
        }
        if (!pq.empty())
        {
            ans = ans + t + 1;
        }
        else
        {
            ans = ans + temp;
        }
    }
    return ans;
}
int main()
{
    return 0;
}