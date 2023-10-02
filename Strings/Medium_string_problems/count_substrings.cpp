#include <bits/stdc++.h>
using namespace std;
bool checker(string check, int k)
{
    int i = 0;
    map<char, int> mpp;
    while (i < check.size() && k >= 0)
    {
        if (mpp[check[i]] == 0)
        {
            k--;
            mpp[check[i]]++;
        }
        i++;
    }
    if (i == check.size() && k == 0)
    {
        return true;
    }
    return false;
}
int countSubStrings(string str, int k)
{
    // Write your code here
    int ans = 0;
    for (int i{0}; i < str.size(); i++)
    {
        for (int j{i}; j < str.size(); j++)
        {
            string check = str.substr(i, j - i + 1);
            if (checker(check, k) == true)
            {
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
    string ex = "aacfssa";
    int g = 3;
    cout << countSubStrings(ex, g);
    return 0;
}
