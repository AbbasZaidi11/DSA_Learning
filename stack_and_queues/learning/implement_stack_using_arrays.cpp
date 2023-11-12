#include <bits/stdc++.h>
using namespace std;
// Stack class.
class Stack
{

public:
    vector<int> vec;
    int indi;
    Stack(int capacity)
    {
        // Write your code here.
        vec.resize(capacity);
        indi = -1;
    }

    void push(int num)
    {
        // Write your code here.
        if (indi == vec.size() - 1)
        {
            return;
        }
        indi = indi + 1;
        vec[indi] = num;
    }

    int pop()
    {
        // Write your code here.
        if (indi == -1)
        {
            return -1;
        }
        int ans = vec[indi];
        vec[indi] = -1;
        indi = indi - 1;
        return ans;
    }

    int top()
    {
        // Write your code here.
        if (indi > -1 && indi <= (vec.size() - 1))
        {
            return vec[indi];
        }
        return -1;
    }

    int isEmpty()
    {
        // Write your code here.
        if (indi == -1)
        {
            return 1;
        }
        return 0;
    }

    int isFull()
    {
        // Write your code here.
        if (indi == (vec.size() - 1))
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    return 0;
}