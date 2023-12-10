#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        stack<char> st;
        int n = num.size();
        for (int i{0}; i < n; i++)
        {
            while (!st.empty() && st.top() > num[i] && k > 0)
            {
                st.pop();
                k = k - 1;
            }
            if (st.empty() && num[i] == '0')
            {
                continue;
            }
            st.push(num[i]);
        }
        if (k > 0)
        {
            while (k > 0 && !st.empty())
            {
                st.pop();
                k = k - 1;
            }
        }
        if (st.empty())
        {
            return "0";
        }
        while (!st.empty())
        {
            num[n - 1] = st.top();
            st.pop();
            n = n - 1;
        }
        return num.substr(n);
    }
};
int main()
{
    return 0;
}