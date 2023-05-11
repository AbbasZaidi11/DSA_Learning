#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1) // This will keep going because we could not find any element which was greater than the pivot and on it's left size.
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) // This will keep going because we could not find any element which was lesser than the pivot and on the right side of the element.
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}
vector<int> quickSort(vector<int> arr)
{
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    vector<int> arr2 = {5, 4, 3, 2, 1};
    vector<int> arr3;
    arr3 = quickSort(arr2);
    for (auto it : arr3)
    {
        cout << it << " ";
    }
    return 0;
}