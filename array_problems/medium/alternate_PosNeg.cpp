#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int arr[n] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    vector<int> pos;
    vector<int> neg;
    for (int i{0}; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    vector<int> vec;
    int i = 0;
    int j = 0;
    int z = 0;
    while (i < pos.size() && j < neg.size() && z < n)
    {

        arr[z] = pos[i];
        i++;
        z++;
        arr[z] = neg[j];
        j++;
        z++;
    }
    while (i < pos.size() && z < n)
    {
        if (i < pos.size())
        {
            arr[z] = pos[i];
            i++;
            z++;
        }
    }
    while (j < neg.size() && z < n)
    {
        if (j < neg.size())
        {
            arr[z] = neg[j];
            j++;
            z++;
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}
