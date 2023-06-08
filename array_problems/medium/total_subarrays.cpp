#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int arr[n] = {3, 1, 2, 4};
    int left = 0;
    int right = 0;
    int sum = 0;
    int k = 6;
    int count = 0;
    while (right < n)
    {
        sum += arr[right];
        while (sum > k && left <= right)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            count++;
        }
        right++;
    }
    cout << count << endl;
    return 0;
}