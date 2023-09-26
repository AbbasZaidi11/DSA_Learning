#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    map<char, char> mpp1;
    map<char, char> mpp2;
    if (s == t)
    {
        return true;
    }
    for (int i{0}; i < s.length(); i++)
    {
        if (!mpp1[s[i]] && !mpp2[t[i]])
        {
            mpp1[s[i]] = t[i];
            mpp2[t[i]] = s[i];
        }
        if (mpp1[s[i]] == t[i] && mpp2[t[i]] == s[i])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string a = "for";
    string b = "bar";
    cout << isIsomorphic(a, b);
}