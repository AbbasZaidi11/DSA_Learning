#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        stack<int> s1;
        stack<int> s2;
        vector<int> left_smaller;
        left_smaller.resize(n);
        vector<int> right_smaller;
        right_smaller.resize(n);
        for (int i{0}; i < n; i++)
        {
            while (!s1.empty() && heights[s1.top()] >= heights[i])
            {
                s1.pop();
            }
            if (s1.empty())
            {
                left_smaller[i] = 0;
            }
            else
            {
                left_smaller[i] = s1.top() + 1;
            }
            s1.push(i);
        }
        for (int i{n - 1}; i >= 0; i--)
        {
            while (!s2.empty() && heights[s2.top()] >= heights[i])
            {
                s2.pop();
            }
            if (s2.empty())
            {
                right_smaller[i] = n - 1;
            }
            else
            {
                right_smaller[i] = s2.top() - 1;
            }
            s2.push(i);
        }
        int maxA = 0;
        for (int i{0}; i < n; i++)
        {
            maxA = max(maxA, heights[i] * (right_smaller[i] - left_smaller[i] + 1));
        }
        return maxA;
    }
};
int main()
{
    return 0;
}