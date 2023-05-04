#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int count = n;
    int temp;
    int check;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        if (temp != 0) // necessary to avoid division by 0.
        {
            if (count % temp == 0)
            {
                check += 1;
            }
        }
    }
    cout << check << endl;
    return 0;
}