#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        stack<int> st;
        unordered_map<int, int> nextGreater;

        for (int i = nums2.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() < nums2[i])
            {
                st.pop();
            }

            if (st.empty())
            {
                nextGreater[nums2[i]] = -1;
            }
            else
            {
                nextGreater[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }

        vector<int> result;

        for (int num : nums1)
        {
            result.push_back(nextGreater[num]);
        }

        return result;
    }
};
int main()
{
    return 0;
}