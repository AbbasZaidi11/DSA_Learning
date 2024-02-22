#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to insert heap.
    priority_queue<int> small;
    priority_queue<int, vector<int>, greater<int>> large;

    void insertHeap(int &x)
    {
        if (small.empty() || x < small.top())
        {
            small.push(x);
        }
        else
        {
            large.push(x);
        }
        if (abs((int)small.size() - (int)large.size()) > 1)
        {
            large.push(small.top());
            small.pop();
        }
        else if (large.size() > small.size())
        {
            small.push(large.top());
            large.pop();
        }
    }

    // Function to balance heaps.
    void balanceHeaps()
    {
    }

    // Function to return Median.
    double getMedian()
    {
        if (small.size() == large.size())
        {
            return (double)(small.top() + large.top()) / 2;
        }
        return small.top();
    }
};

int main()
{
    return 0;
}