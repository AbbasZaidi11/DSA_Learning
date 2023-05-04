#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int check = n;
    int rev_n;
    while (n != 0)
    {
        rev_n = rev_n * 10;
        rev_n += n % 10;
        n = n / 10;

        /* code */
    }
    if (check == rev_n)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "No Palindrome" << endl;
        cout << check << " " << rev_n << endl;
    }

    return 0;
}