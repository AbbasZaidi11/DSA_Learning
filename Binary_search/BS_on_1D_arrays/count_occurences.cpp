// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 1, 2, 2, 2, 2, 3};
//     int n = 7;
//     int x = 2;
//     map<int, int> mpp;
//     for (int i{0}; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }
//     cout << mpp[x] << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 2, 2, 2, 2, 3};
    int n = 7;
    int x = 4;
    int low = 0;
    int high = n - 1;
    int count = 0;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == x)
        {
            int up = mid + 1;
            while (arr[up] == x && up < n)
            {
                up++;
                count++;
            }
            int down = mid - 1;
            while (arr[down] == x && down >= 0)
            {
                down--;
                count++;
            }
            break;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << count << endl;
    return 0;
}
