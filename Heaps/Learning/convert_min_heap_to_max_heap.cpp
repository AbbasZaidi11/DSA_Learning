#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int> &arr, int i, int n)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, largest, n);
    }
}
vector<int> MinToMaxHeap(int n, vector<int> &arr)
{
    // Write your code here.
    int k = n / 2;
    for (int i{k}; i >= 0; i--)
    {
        heapify(arr, i, n);
    }
    return arr;
}
int main()
{
    return 0;
}