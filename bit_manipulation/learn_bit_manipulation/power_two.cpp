#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n = 1)
    {
        return true;
    }
    int i = 0;
    int cp = n;

    while (cp > 0)
    {
        cp = cp / 2;
        i++;
    }
    int k = (1 << (i - 1));

    if ((n & (~k)) == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    isPowerOfTwo(3);
    return 0;
}