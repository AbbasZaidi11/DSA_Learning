#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    int arr[6] = {90, 80, 100, 70, 40, 30};
    int count;
    for (int i = 0; i <= n - 2; i += 1)
    {
        if (arr[i] > arr[i + 1])
        {
            count += 1;
            break;
        }
    }
    if (count != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}
