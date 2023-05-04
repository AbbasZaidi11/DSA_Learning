#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rev = 0;

    while (n > 0)
    {
        /* code */
        rev = (rev * 10) + n % 10; // by doing this if we are printing 100 we get it's reverse 001.
        n = n / 10;
    }
    cout << rev << endl;

    return 0;
}