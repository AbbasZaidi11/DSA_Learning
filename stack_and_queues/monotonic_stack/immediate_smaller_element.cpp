#include <bits/stdc++.h>
using namespace std;

void immediateSmaller(vector<int> &a)
{
    // Write your code here.
    stack<int> st;
    st.push(a[0]);
    int n = a.size();
    for (int i{1}; i < n; i++)
    {
        if (st.top() > a[i])
        {
            a[i - 1] = a[i];
        }
        else
        {
            a[i - 1] = -1;
        }
        st.push(a[i]);
    }
    a[n - 1] = -1;
    return;
}

int main()
{
    return 0;
}