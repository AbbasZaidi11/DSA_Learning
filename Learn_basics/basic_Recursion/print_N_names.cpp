#include <bits/stdc++.h>
using namespace std;
void print_name(int N)
{
    if (N > 0)
    {
        print_name(N - 1);
        cout << "GFG ";
    }
}

int main()
{
    print_name(10);
    return 0;
}