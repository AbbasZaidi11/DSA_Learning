#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int A[] = {2, 5, 6, 0, 0, 1, 2};
    int k = 0;
    int low = 0;
    int high = n - 1;
    int stat = 0;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (A[mid] == k)
        {
            stat = 1;
            break;
        }
        if (A[low] == A[mid] && A[mid] == A[high])
        {
            low++;
            high--;
            continue;
        }
        if (A[low] <= A[mid])
        {
            if (A[low] <= k && k <= A[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (A[mid] <= k && k <= A[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    cout << stat << endl;
    return 0;
}