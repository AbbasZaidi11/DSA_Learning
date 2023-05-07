#include <bits/stdc++.h>
using namespace std;
int main()
{
    int space = 2 * 4 - 1;
    for (int i = 1; i < 5; i += 1)
    {
        for (int j = 1; j <= i; j += 1)
        {
            cout << j;
        }
        for (int j = 1; j < space; j += 1)
        {
            cout << " ";
        }

        for (int j = {i}; j > 0; j -= 1)
        {
            cout << j;
        }
        space = space - 2;
        cout << "\n";
    }

    return 0;
}