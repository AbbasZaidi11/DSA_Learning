#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 1};
    int n = nums.size();
    if (n == 1)
    {
        cout << 0 << endl;
    }
    if (nums[0] > nums[1])
    {
        cout << 0 << endl;
    }
    if (nums[nums.size() - 1] > nums[nums.size() - 2])
    {
        cout << nums[nums.size() - 1] << endl;
    }
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
        {
            cout << mid << endl;
            break;
        }
        else if (nums[mid] < nums[mid + 1])
        {
            low = mid + 1;
        }
        else if (nums[mid] > nums[mid - 1])
        {
            high = mid - 1;
        }
    }
    return 0;
}