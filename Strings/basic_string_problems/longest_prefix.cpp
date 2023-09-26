#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    int mini = INT_MAX;
    for (int i{0}; i < strs.size(); i++)
    {
        if (strs[i].size() < mini)
        {
            mini = strs[i].size();
        }
    }
    int count = 0;
    string ans;
    for (int j{0}; j < mini; j++)
    {
        count = 0;
        for (int i{0}; i < strs.size(); i++)
        {
            if (strs[i][j] == strs[0][j])
            {
                count++;
                if (count == strs.size())
                {
                    ans = ans + strs[0][j];
                }
            }
            else
            {
                cout << ans << endl;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}