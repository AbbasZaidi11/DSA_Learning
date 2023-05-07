#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 0; i < 5; i += 1)
    {
        for (int j = n - i; j > 0; j -= 1)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j += 1)
        {
            cout << "*";
        }
        {
        }
        for (int j = n - i; j > 0; j -= 1)
        {
            cout << " ";
        }
        cout << "\n";
    }

    for (int i = 5; i > 0; i -= 1)
    {
        for (int j = 0; j < n - i; j += 1)
        {
            cout << " ";
        }
        for (int j = 1; j < i * 2; j += 1)
        {
            cout << "*";
        }
        // for (int j = 0; j < n - i; j += 1)
        // {
        //     cout << " ";
        // }
        cout << "\n";
    }

    return 0;
}
