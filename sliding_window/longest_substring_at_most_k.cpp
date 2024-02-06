#include <bits/stdc++.h>
using namespace std;
int kDistinctChars(int k, string &str)
{
    // Write your code here
    int n = str.size();
    int ans = 0;
    map<char, int> mpp;
    int i = 0;
    int j = 0;
    int len = INT_MIN;
    while (i < n)
    {
        mpp[str[i]]++;
        while (mpp.size() > k)
        {
            mpp[str[j]]--;
            if (mpp[str[j]] == 0)
            {
                mpp.erase(str[j]);
            }
            j++;
        }
        len = max(len, i - j + 1);
        i++;
    }
    return len;
}

int main()
{
    return 0;
}