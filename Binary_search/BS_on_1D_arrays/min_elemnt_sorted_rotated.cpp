#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    vector<int> arr = {4, 5, 1, 2, 3};

    int low = 0;
    int high = arr.size() - 1;
    int mini = INT_MAX;
    set<int> st;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        mini = min(arr[mid], mini);
        cout << mini << endl;
        if (arr[high] <= arr[mid] && arr[low] >= arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        st.insert(mini);
    }
    return 0;
}