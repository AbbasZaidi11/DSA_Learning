#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    queue<int> q;
    int size = 0;
    MyStack()
    {
    }

    void push(int x)
    {
        size = size + 1;
        int i = size - 1;
        q.push(x);
        while (i > 0)
        {
            int k = q.front();
            q.pop();
            q.push(k);
            i--;
        }
    }

    int pop()
    {
        int ans = q.front();
        size = size - 1;
        q.pop();
        return ans;
    }

    int top()
    {

        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    return 0;
}