#include <bits/stdc++.h>
using namespace std;
int sumreturn(vector<int> arr, int divi)
{
    int long long sum = 0;
    for (int i{0}; i < arr.size(); i++)
    {
        sum += ceil(double(arr[i]) / double(divi));
    }
    return sum;
}
int main()
{
    vector<int> nums = {44, 22, 33, 11, 1};
    sort(nums.begin(), nums.end());
    int threshold = 5;
    int low = 1;
    int high = nums[nums.size() - 1];
    int k = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int check = sumreturn(nums, mid);
        if (check <= threshold)
        {
            high = mid - 1;
            k = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << k << endl;

    return 0;
}