#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int k = 2;
    int arr[5] = {1, 3, 4, 5, 6};
    int mid = n / 2;
    int count;
    if (arr[mid] > k)
    {
        for (int i{0}; i < mid; i += 1)
        {
            if (arr[i] == k)
            {
                cout << 1 << " " << i << endl;
                count += 1;
                break;
            }
        }
    }
    else
    {
        for (int i{mid + 1}; i < n; i++)
        {
            if (arr[i] == k)
            {
                cout << 1 << " " << i << endl;
                count += 1;
                break;
            }
        }
    }
    if (count == 0)
    {
        cout << -1 << endl;
    }
    return 0;
}