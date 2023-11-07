#include <bits/stdc++.h>
using namespace std;
vector<int> twoOddNum(vector<int> arr)
{
    // Write your code here.
    int xor_sum = 0;
    for (int i{0}; i < arr.size(); i++)
    {
        xor_sum = xor_sum ^ arr[i];
    }
    int index = 0;
    while (xor_sum)
    {
        if (xor_sum & 1)
        {
            break;
        }
        index++;
        xor_sum = (xor_sum >> 1);
    }
    int mask = (1 << index);
    vector<int> ans;
    int left_sum = 0;
    int right_sum = 0;
    for (int i{0}; i < arr.size(); i++)
    {
        if ((mask & arr[i]) == 0)
        {
            left_sum = left_sum ^ arr[i];
        }
        else
        {
            right_sum = right_sum ^ arr[i];
        }
    }
    ans.push_back(left_sum);
    ans.push_back(right_sum);
    sort(ans.rbegin(), ans.rend());
    return ans;
}
int main()
{
    return 0;
}