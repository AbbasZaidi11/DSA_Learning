#include <bits/stdc++.h>
using namespace std;
bool isKthBitSet(int n, int k)
{
    // Write your code here.
    int mask = (1 << (k - 1));
    if ((n & mask) == 0)
    {
        return false;
    }
    return true;
}
int main()
{
    return 0;
}