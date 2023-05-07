#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    for (int i = 0; i <= 5; i += 1)
    {
        for (int j = 0; j <= i; j += 1)
        {
            count += 1;
            cout << count << " ";
        }
        cout << "\n";
    }
    return 0;
}