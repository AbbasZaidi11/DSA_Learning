#include <bits/stdc++.h>
using namespace std;
bool isMaxHeap(int arr[], int n)
{
    // Your code goes here
    int i = 0;
    while (i < n)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n && arr[left] > arr[i])
        {
            return false;
        }
        if (right < n && arr[right] > arr[i])
        {
            return false;
        }
        i++;
    }
    return true;
}

int main()
{
    return 0;
}