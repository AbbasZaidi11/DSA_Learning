#include <bits/stdc++.h>
using namespace std;
int characterReplacement(string s, int k)
{
    int n = s.size();
    map<char, int> mpp;
    int i = 0;
    int j = 0;
    int ans = INT_MIN;
    int freq = -1;
    while (i < n)
    {
        mpp[s[i]]++;
        freq = max(freq, mpp[s[i]]);
        int diff = (i - j + 1) - freq;
        while (diff > k && j < n)
        {
            mpp[s[j]]--;
            j++;
        }
        ans = max(ans, i - j + 1);
        i++;
    }
    return ans;
}

int main()
{
    string s = "ABAA";
    int k = 0;
    characterReplacement(s, k);

    return 0;
}