#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int arr[4] = {1, 3, 4, 2};
    vector<int> vec;
    int d = 3;
    for (int i = d; i <= n - 1; i += 1)
    {
        vec.push_back(arr[i]);
    }
    for (int i = 0; i < d; i += 1)
    {
        vec.push_back(arr[i]);
    }
    for (auto it : vec)
    {
        cout << it << " ";
    }
    return 0;
}