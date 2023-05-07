#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i < 5; i += 1)
    {
        for (int j = 1; j < 5; j += 1)
        {
            if (i == 1 || i == 5 - 1 || j == 1 || j == 5 - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}