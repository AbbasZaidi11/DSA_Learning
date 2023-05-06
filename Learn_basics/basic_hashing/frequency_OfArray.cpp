#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i{0}; i < n; i += 1)
    {
        cout << "Enter the array elements" << endl;
        cin >> arr[i];
    }
    map<int, int> mpp;
    for (int it : arr)
    {
        mpp[it] += 1;
    }
    for (auto it : mpp)
    {
        cout << "The frequency for this element is = " << it.first << " " << it.second << endl;
    }

    return 0;
}