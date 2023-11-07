#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int xor_sum = 0;
        for (int i{0}; i < nums.size(); i++)
        {
            xor_sum = xor_sum ^ nums[i];
        }
        return xor_sum;
    }
};
int main()
{
    return 0;
}
