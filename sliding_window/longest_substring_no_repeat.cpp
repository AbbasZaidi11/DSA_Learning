#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int right = 0;
        int left = 0;
        vector<int> vec(256, -1);
        int len = 0;
        while (right < n)
        {
            if (vec[s[right]] != -1)
            {
                left = max(left, vec[s[right]] + 1);
            }
            vec[s[right]] = right;
            len = max(len, right - left + 1);
            right++;
        }
        return len;
    }
};
int main()
{
    return 0;
}
