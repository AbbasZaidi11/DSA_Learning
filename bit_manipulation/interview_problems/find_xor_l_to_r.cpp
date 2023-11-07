#include <bits/stdc++.h>
using namespace std;
int findXOR(int L, int R)
{
    // Write your code here.
    if (L == 0 && R == 0)
    {
        return 0;
    }
    else if (R == 0)
    {
        return L;
    }
    else if (L == 0)
    {
        return R;
    }
    int left_xor;
    if ((L - 1) % 4 == 0)
    {
        left_xor = L - 1;
    }
    else if ((L - 1) % 4 == 1)
    {
        left_xor = 1;
    }
    else if ((L - 1) % 4 == 2)
    {
        left_xor = L;
    }
    else if ((L - 1) % 4 == 3)
    {
        left_xor = 0;
    }
    int right_xor;
    if ((R) % 4 == 0)
    {
        right_xor = R;
    }
    else if ((R) % 4 == 1)
    {
        right_xor = 1;
    }
    else if ((R) % 4 == 2)
    {
        right_xor = R + 1;
    }
    else if ((R) % 4 == 3)
    {
        right_xor = 0;
    }
    return left_xor ^ right_xor;
}
int main()
{
    return 0;
}