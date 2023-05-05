#include <bits/stdc++.h>
using namespace std;
void num_fun(int N)
{
    if (N > 0)
    {
        cout << N << endl;
        num_fun(N - 1);
        // num_fun(N - 1);
        // cout << N << endl;
    }
};

int main()
{
    num_fun(5);
    return 0;
}