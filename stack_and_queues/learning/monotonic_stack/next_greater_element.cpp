#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        for (int i{0}; i < nums1.size(); i++)
        {
            int k = nums1[i];
            for (int j{0}; j < nums2.size(); j++)
            {
                if (k == nums2[j])
                {
                    int alpha = j;
                    int greater = -1;
                    while (alpha < nums2.size())
                    {
                        if (nums2[alpha] > nums2[j])
                        {
                            greater = (nums2[alpha]);
                            break;
                        }
                        alpha++;
                    }
                    ans.push_back(greater);
                }
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}
