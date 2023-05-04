#include <bits/stdc++.h>
using namespace std;

void sumofDivisors(int n)
{
    int sum;
    for (int i{1}; i <= sqrt(n); i += 1)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                sum = sum + i + n / i;
            }
        }
    }
    cout << sum << endl;
}

int main()
{
    sumofDivisors(5);
    return 0;
}