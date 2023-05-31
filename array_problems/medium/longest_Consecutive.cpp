#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {2, 6, 1, 9, 4, 5, 3};
    if (n == 0)
    {
        return 0;
    }
    int longest = 1;
    unordered_set<int> st;
    for (int i{0}; i < n; i++)
    {
        st.insert(arr[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                count++;
            }
            longest = max(count, longest);
        }
    }
    cout << longest << endl;
    return 0;
}