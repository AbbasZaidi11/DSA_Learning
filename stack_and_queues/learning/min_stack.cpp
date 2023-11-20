#include <bits/stdc++.h>
using namespace std;
class MinStack
{
public:
    stack<int> s1;
    stack<int> s2;
    int mini;
    MinStack()
    {
        mini = INT_MAX;
    }

    void push(int val)
    {
        if (val <= mini)
        {
            mini = val;
            s2.push(mini);
        }
        s1.push(val);
    }

    void pop()
    {
        if (s1.empty() == true)
        {
            return;
        }
        if (s1.top() == s2.top())
        {
            s1.pop();
            s2.pop();
            if (s2.empty() == true)
            {
                mini = INT_MAX;
                return;
            }
            mini = s2.top();

            return;
        }
        s1.pop();
    }

    int top()
    {
        if (s1.empty() == true)
        {
            return -1;
        }
        return s1.top();
    }

    int getMin()
    {
        if (s1.empty() == true || s2.empty() == true)
        {
            return -1;
        }

        return s2.top();
    }
};
int main()
{
    return 0;
}