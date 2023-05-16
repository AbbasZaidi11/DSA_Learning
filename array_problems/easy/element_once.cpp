#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int a[n] = {2, 2, 5, 5, 20, 30, 30};
    int i = 0;
    while (i < n)
    {
        if (a[i] == a[i + 1])
        {
            i += 2;
        }
        else
        {
            cout << a[i] << endl;
            break;
        }
    }

    return 0;
}