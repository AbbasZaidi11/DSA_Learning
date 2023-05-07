#include <iostream>
using namespace std;
int main()
{

    for (int i{4}; i >= 0; i -= 1)
    {
        int alpha = 65;
        for (int j{i}; j >= 0; j -= 1)
        {

            char ch = char(alpha);
            cout << ch << " ";
            alpha += 1;
        }
        cout << "\n";
    }
    return 0;
}