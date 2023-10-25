#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int start, int end, string s)
    {
        while (start <= end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void recur(int index, int n, string s, vector<string> &temp, vector<vector<string>> &ans)
    {
        if (index == n)
        {
            ans.push_back(temp);
            return;
        }
        for (int i{index}; i < n; i++)
        {
            if (isPalindrome(index, i, s) == true)
            {
                temp.push_back(s.substr(index, i - index + 1));
                recur(i + 1, n, s, temp, ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {
        int n = s.size();
        vector<vector<string>> ans;
        vector<string> temp;
        recur(0, n, s, temp, ans);
        return ans;
    }
};
int main()
{
    return 0;
}