#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n - 1] = {2, 5, 3, 1};
    int sum = n * (n + 1) / 2;
    int sum1;
    for (int i{0}; i < n - 1; i += 1)
    {
        sum1 += arr[i];
    }
    int f = sum - sum1;
    cout << f << endl;
    return 0;
}