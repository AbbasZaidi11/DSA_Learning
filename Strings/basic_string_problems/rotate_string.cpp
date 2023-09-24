#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcde";
    string goal = "cdeab";
    int i = 1;
    int j = 0;
    int n = s.size();
    if (s == goal)
    {
        cout << "Equal" << endl;
    }
    if (s.size() != goal.size())
    {
        cout << "Not Equal " << endl;
    }
    while (i < n)
    {
        string temp = s.substr(i, n - i) + s.substr(0, i);
        if (temp == goal)
        {
            cout << "Equal" << endl;
            break;
        }
        i++;
    }

    return 0;
}