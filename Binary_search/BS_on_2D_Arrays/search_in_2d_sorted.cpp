#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> vec = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int m = vec.size();    // no of rows
    int n = vec[0].size(); // no of columns
    int target = 3;
    int t = -1;
    int total = m * n;
    int low = 0;
    int high = total - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int midr = mid / m;
        int midc = mid % n;
        if (vec[midr][midc] == target)
        {
            cout << " match found " << endl;
            break;
        }
        else if (vec[midr][midc] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return 0;
}