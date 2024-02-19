#include <bits/stdc++.h>
using namespace std;
int minValue(string s, int k)
{
    // code here
    int n = s.size();
    vector<int> vec;
    vec.resize(26);
    fill(vec.begin(), vec.end(), 0);
    for (int i{0}; i < n; i++)
    {
        vec[s[i] - 'a']++;
    }
    priority_queue<int> pq;
    for (int i{0}; i < 26; i++)
    {
        if (vec[i] != 0)
        {
            pq.push(vec[i]);
        }
    }
    int ans = 0;
    while (!pq.empty() && k > 0)
    {
        int f = pq.top();
        pq.pop();
        f = f - 1;
        if (f != 0)
        {
            pq.push(f);
        }
        k = k - 1;
    }
    while (!pq.empty())
    {
        int sqr = pq.top();
        sqr = sqr * sqr;
        ans = ans + sqr;
        pq.pop();
    }
    return ans;
}

int main()
{
    cout << minValue("bc", 1) << endl;
    return 0;
}