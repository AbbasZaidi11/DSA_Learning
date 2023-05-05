#include <bits/stdc++.h>
using namespace std;

void palin_check(string &j, int start, int end) // calling by reference
{
    if (start < end)
    {
        swap(j[start], j[end]);
        palin_check(j, start + 1, end - 1);
    }
}

int main()
{
    string testing;
    cin >> testing;
    string copy_ch = testing;
    int n = testing.length() - 1;
    palin_check(testing, 0, n);
    if (testing == copy_ch)
    {
        cout << "PALINDROME STRING";
    }
    else
    {
        cout << "NOT A PALINDROME";
    }
    return 0;
}