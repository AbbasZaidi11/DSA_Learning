#include <bits/stdc++.h>
using namespace std;
int search(string pat, string txt)
{
    // code here
    int n = txt.size();
    int k = pat.size();
    int i = 0;
    int j = 0;
    int ans = 0;
    map<int, int> mpp1;
    map<int, int> mpp2;
    for (int x{0}; x < k; x++)
    {
        mpp2[pat[x]]++;
    }

    while (i < n)
    {
        while ((i - j + 1) > k)
        {
            mpp1[txt[j]]--;
            if (mpp1[txt[j]] == 0)
            {
                mpp1.erase(txt[j]);
            }
            j++;
        }
        mpp1[txt[i]]++;
        if (mpp1 == mpp2)
        {
            ans++;
        }
        i++;
    }
    return ans;
}

int main()
{
    return 0;
}