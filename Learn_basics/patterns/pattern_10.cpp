#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int t = n * 2 - 1;

    for (int i = 0; i < t; i += 1)
    {
        if (i > n - 1)
        {
            for (int j = 0; j < t - i; j += 1)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j <= i; j += 1)
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}