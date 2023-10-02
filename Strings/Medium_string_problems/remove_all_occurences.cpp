#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part)
{
    while (s.length() > 0)
    {
        int found = s.find(part);
        if (found != string::npos)
        {
            s.erase(found, part.length());
        }
        else
        {
            break;
        }
    }
    return s;
}
int main()
{
    string k = "daabcbaabcbc";
    string word = "abc";
    string ans = removeOccurrences(k, word);
    cout << ans << endl;
    return 0;
}