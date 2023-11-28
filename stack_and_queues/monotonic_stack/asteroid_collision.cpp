#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        int n = asteroids.size();
        stack<int> st;
        for (int i{0}; i < n; i++)
        {
            while (!st.empty() && asteroids[i] < 0 && st.top() > 0)
            {
                int diff = asteroids[i] + st.top();
                if (diff < 0)
                {
                    st.pop();
                }
                else if (diff > 0)
                {
                    asteroids[i] = 0;
                }
                else
                {
                    asteroids[i] = 0;
                    st.pop();
                }
            }
            if (asteroids[i])
            {
                st.push(asteroids[i]);
            }
        }
        vector<int> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    return 0;
}