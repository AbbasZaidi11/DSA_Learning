#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int arr[n] = {100, 180, 260, 310, 40, 535, 695};
    int i = 0;
    int j = 0;
    int profit;
    while (i < n)
    {
        if (arr[i + 1] > arr[i])
        {
            i++;
        }
        if (profit < 0)
        {
            i = j;
            j++;
        }
    }
    cout << profit << endl;

    return 0;
}