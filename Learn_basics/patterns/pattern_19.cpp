#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i{0}; i < 5; i += 1)
    {
        for (int j{5 - i}; j > 0; j -= 1)
        {
            cout << "*";
        }
        for (int j{}; j < i * 2; j += 1)
        {
            cout << " ";
        }
        for (int j{5 - i}; j > 0; j -= 1)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i{1}; i <= 5; i += 1)
    {
        for (int j{1}; j <= i; j += 1)
        {
            cout << "*";
        }
        for (int j = 10 - 2 * i; j >= 1; j -= 1)
        {
            cout << " ";
        }
        for (int j{1}; j <= i; j += 1)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}