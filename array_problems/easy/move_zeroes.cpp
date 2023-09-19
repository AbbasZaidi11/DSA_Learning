#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {0, 0, 1};
    int counter = 0;
    int i = 0;
    while (i < nums.size())
    {
        if (nums[i] == 0)
        {
            counter++;
            nums.erase(nums.begin() + i);
        }
        else
        {
            i++;
        }
    }
    for (int j{0}; j < counter; j++)
    {
        nums.push_back(0);
    }
    for (auto it : nums)
    {
        cout << it << ' ' << endl;
    }
    return 0;
}