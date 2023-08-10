
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checker(vector<int> stalls, int mid, int n, int k)
    {
        int pointer = stalls[0];
        int cow_placed = 1;

        for (int i{1}; i < stalls.size(); i++)
        {
            if (stalls[i] - pointer >= mid)
            {
                cow_placed++;
                pointer = stalls[i];
            }
            if (cow_placed >= k)
            {
                return true;
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls)
    {

        sort(stalls.begin(), stalls.end());
        int low = 1;
        int high = stalls[n - 1];
        int ans = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            bool s = checker(stalls, mid, n, k);
            if (s == true)
            {
                low = mid + 1;
                ans = mid;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stalls[i];
        }

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;
    }

    return 0;
}