#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    int rem = k % n;
    vector<int> vec;
    for (int i = rem; i <= n - 1; i += 1)
    {
        vec.push_back(arr[i]);
    }
    for (int i = 0; i < rem; i += 1)
    {
        vec.push_back(arr[i]);
    }
    for (auto it : vec)
    {
        cout << it << " ";
    }
    return 0;
}