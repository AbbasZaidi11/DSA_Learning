#include <bits/stdc++.h>
using namespace std;
int main()
{

    for (int i{0}; i <= 4; i += 1)
    {
        int alpha = 69;
        alpha = alpha - i;
        for (int j{0}; j <= i; j += 1)
        {
            char ch = char(alpha);
            cout << ch << " ";
            alpha += 1;
        }
        cout << "\n";
    }
    return 0;
}