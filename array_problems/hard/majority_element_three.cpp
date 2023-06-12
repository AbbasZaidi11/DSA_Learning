#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    map<int, int> mpp;
    set<int> st;
    for (int i{0}; i < n; i++)
    {
        mpp[arr[i]]++;
        if (mpp[arr[i]] > n / 3)
        {
            st.insert(arr[i]);
        }
    }
    if (st.size() > 0)
    {
        for (auto it : st)
        {
            cout << it << ' ';
        }
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}