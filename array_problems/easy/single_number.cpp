#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    int xor_sum = 0;
    for (int i{0}; i < nums.size(); i++)
    {
        xor_sum = xor_sum ^ nums[i];
    }
    return xor_sum;
}
int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 4, 4};
    int ans = singleNumber(nums);
    cout << ans << endl;

    return 0;
}