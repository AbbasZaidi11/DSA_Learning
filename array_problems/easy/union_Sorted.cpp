#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr1[n] = {1, 2, 3, 4, 5};
    int m = 3;
    int arr2[m] = {1, 2, 3};
    set<int> st;
    for (int i{0}; i < n; i += 1)
    {
        st.insert(arr1[i]);
    }
    for (int j{0}; j < m; j += 1)
    {
        st.insert(arr2[j]);
    }
    vector<int> vec;
    for (auto it : st)
    {
        vec.push_back(it);
    }

    return 0;
}