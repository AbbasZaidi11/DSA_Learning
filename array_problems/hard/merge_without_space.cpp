#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int m = 5;
    int arr1[n] = {1, 3, 5, 7};
    int arr2[m] = {0, 2, 6, 8, 9};
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] >= arr2[j])
        {
            int temp = arr2[j];
            arr2[j] = arr1[i];
            arr1[i] = temp;
            j++;
        }
        else
        {
            int temp = arr2[j];
            arr2[j] = arr1[i];
            arr1[i] = temp;
            i++;
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr1[k] << " ";
    }
    cout << endl;
    for (int k = 0; k < m; k++)
    {
        cout << arr2[k] << " ";
    }

    return 0;
}