#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "tree";

    vector<pair<int, char>> vec(128, {0, 0});
    // you are already creating a hash of 128 space so you just need to find the ascii code
    // of the currect character and then icrement one

    for (char i : s)
    {
        vec[i] = {vec[i].first + 1, i};
    }
    reverse(vec.rbegin(), vec.rend());
    string ans = "";
    for (auto p : vec)
    {
        ans = ans + string(p.first, p.second);
    }
    cout << ans;
    return 0;
}