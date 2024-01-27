#include <bits/stdc++.h>
using namespace std;
int beautySum(string s)
{
    int ans = 0;
    int n = s.length();
    for (int i{0}; i < n; i++)
    {
        map<char, int> mpp;
        multiset<int> st;
        for (int j{i}; j < n; j++)
        {
            if (mpp.find(s[j]) != mpp.end())
            {
                st.erase(mpp[s[j]]);
                mpp[s[j]]++;
                st.insert(mpp[s[j]]);
            }
            else
            {
                mpp[s[j]] = 1;
                st.insert(mpp[s[j]]);
            }
            ans = ans + (*st.rbegin() - *st.begin());
        }
    }
    return ans;
}

int main()
{
    cout << beautySum("aaac");

    return 0;
}