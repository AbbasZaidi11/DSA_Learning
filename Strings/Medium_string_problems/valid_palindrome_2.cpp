#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        char left;
        char right;
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9' || s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                left = s[i] - 'A' + 'a';
            }
            else
            {
                left = s[i];
            }
        }
        else
        {
            i++;
            continue;
        }
        if (s[j] >= 'a' && s[j] <= 'z' || s[j] >= '0' && s[j] <= '9' || s[j] >= 'A' && s[j] <= 'Z')
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                right = s[j] - 'A' + 'a';
            }
            else
            {
                right = s[j];
            }
        }
        else
        {
            j--;
            continue;
        }
        if (left == right)
        {
            i++;
            j--;
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
    string k = "A man, a plan, a canal: Panama";
    cout << isPalindrome(k);
}