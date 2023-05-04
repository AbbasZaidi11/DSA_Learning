#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int check = n;
    int arm = 0;
    while (check > 0)
    {
        int temp = check % 10;
        arm = arm + (temp * temp * temp);
        check = check / 10;
    }
    if (arm == n)
    {
        cout << "Armstrong" << endl;
    }
    else
    {
        cout << "Not Armstrong" << endl;
    }

    return 0;
}