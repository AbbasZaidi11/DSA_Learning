#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void recur(string digits, string output, int index, vector<string> &ans, string mapping[])
    {
        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }
        int num = digits[index] - '0';
        string str = mapping[num];
        for (int i{0}; i < str.length(); i++)
        {
            output.push_back(str[i]);
            recur(digits, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.length() == 0)
        {
            return ans;
        }
        string output;
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        recur(digits, output, 0, ans, mapping);
        return ans;
    }
};
int main()
{
    return 0;
}