#include <bits/stdc++.h>
using namespace std;
void recur_bubble(int arr[], int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        for (int j = 0; j <= n - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        recur_bubble(arr, n - 1);
    }
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    recur_bubble(arr, 5);
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}