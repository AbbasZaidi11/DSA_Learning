#include <iostream>
using namespace std;

int main()
{
    int star = 1;

    for (int i{0}; i <= 4; i += 1)
    {
        if (i % 2 != 0)
        {
            star = 0;
        }
        else
        {
            star = 1;
        }
        for (int j{0}; j <= i; j += 1)
        {
            cout << star << " ";
            star = 1 - star;
        }
        cout << "\n";
    }
    return 0;
}
