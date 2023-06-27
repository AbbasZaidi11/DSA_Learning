#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    vector<int> arr = {3, 5, 1, 2};
    int key = 6;
    int low = 0;
    int high = 3;
    int value = -1;
    while (low < high)
    {
        while (arr[low] > arr[high] && high > low)
        {
            if (arr[high] == key)
            {
                value = high;
                cout << value << endl;
                break;
            }
            high--;
        }
        int mid = low + (high - low / 2);
        if (arr[mid] == key)
        {
            value = mid;
            cout << value << endl;
            break;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << value << endl;
    return 0;
}