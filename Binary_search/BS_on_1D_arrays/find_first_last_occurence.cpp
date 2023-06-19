// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 1;
//     int x = 1;
//     vector<int> arr = {1};
//     int low = 0;
//     int high = arr.size() - 1;
//     while (low <= high)
//     {
//         int mid = low + (high - low / 2);
//         if (arr[mid] == x)
//         {
//             int low_pos = mid;
//             int high_pos = mid;
//             while (arr[low_pos] == x && low_pos >= 0)
//             {
//                 low_pos--;
//             }
//             while (arr[high_pos] == x && high <= n - 1)
//             {
//                 high_pos++;
//             }
//             cout << low_pos + 1 << " " << high_pos - 1 << endl;
//             break;
//         }
//         else if (arr[mid] > x)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 7;
    vector<int> ans;
    int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    if (lb == nums.size() || nums[lb] != target)
    {
        ans = {-1, -1};
    }
    else
    {
        int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        ans = {lb, ub - 1};
    }
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}