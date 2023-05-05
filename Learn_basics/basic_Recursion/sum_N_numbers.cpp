#include <bits/stdc++.h>
using namespace std;
int sum_Num(int N)
{
    if (N == 0)
        return N;

    return (N * N * N) + sum_Num(N - 1);
}

int main()
{
    cout << sum_Num(5) << endl;

    return 0;
}