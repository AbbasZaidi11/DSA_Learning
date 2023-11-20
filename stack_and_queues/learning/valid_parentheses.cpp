#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        if (s.size() == 1)
        {
            return false;
        }
        stack<char> st;
        for (int i{0}; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty() == true)
                {
                    return false;
                }
                if (st.top() == '(' && s[i] == ')')
                {
                    st.pop();
                    continue;
                }
                else if (st.top() == '{' && s[i] == '}')
                {
                    st.pop();
                    continue;
                }
                else if (st.top() == '[' && s[i] == ']')
                {
                    st.pop();
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
        if (st.empty() == true)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    return 0;
}