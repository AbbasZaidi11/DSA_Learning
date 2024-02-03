#include <bits/stdc++.h>
using namespace std;
int numberOfSubstrings(string s)
{
    int n = s.size();
    int i = 0;
    int j = 0;
    unordered_map<char, int> mpp;
    int count = 0;
    while (i < n)
    {
        mpp[s[i]]++;
        while (mpp.size() == 3)
        {
            count = count + (n - i);
            mpp[s[j]]--;
            if (mpp[s[j]] == 0)
            {
                mpp.erase(s[j]);
            }
            j++;
        }
        i++;
    }
    return count;
}

int main()
{
    return 0;
}