#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int sum;
    int maxi = INT_MIN;
    int arr[n] = {1, 2, 3, -2, 5};
    for (int i{0}; i < n; i += 1)
    {
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxi << endl;
    return 0;
}