#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    vector<int> arr = {1, 3, 5, 6};
    int k = 2;
    int low = 0;
    int high = arr.size() - 1;
    int count = 0;
    int mid_count = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        mid_count = mid;
        if (arr[mid] == k)
        {
            cout << mid << endl;
            count++;
            break;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (count == 0)
    {
        cout << "not found" << endl;
        if (arr[mid_count] > k)
        {
            cout << mid_count << endl;
        }
        else
        {
            cout << mid_count + 1 << endl;
        }
    }

    return 0;
}