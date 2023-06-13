#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int maxi = INT_MIN;
    vector<int> arr = {6, -3, -10, 0, 2};
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 && i != n - 1)
        {
            prod = arr[i + 1];
            continue;
        }
        prod = prod * arr[i];
        maxi = max(prod, maxi);
    }
    cout << maxi << endl;
    return 0;
}