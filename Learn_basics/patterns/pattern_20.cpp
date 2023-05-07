#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i < 5 * 2; i += 1)
    {
        if (i > 5)
        {
            for (int j = 5 * 2 - i; j >= 1; j -= 1)
            {
                cout << "*";
            }
            for (int j = (i - 5) * 2; j >= 1; j -= 1)
            {
                cout << " ";
            }
            for (int j = 5 * 2 - i; j >= 1; j -= 1)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j <= i; j += 1)
            {
                cout << "*";
            }
            for (int j = 10 - 2 * i; j >= 1; j -= 1)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j += 1)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}