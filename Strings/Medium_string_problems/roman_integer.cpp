#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> mpp;
    mpp['I'] = 1;
    mpp['V'] = 5;
    mpp['X'] = 10;
    mpp['L'] = 50;
    mpp['C'] = 100;
    mpp['D'] = 500;
    mpp['M'] = 1000;
    string s = "MCMXCIV";
    int sum = 0;
    for (int i{0}; i < s.size(); i++)
    {
        if (mpp[s[i]] >= mpp[s[i + 1]])
        {
            sum = sum + mpp[s[i]];
        }
        else
        {
            sum = sum - mpp[s[i]];
        }
    }
    cout << sum << endl;
    return 0;
}