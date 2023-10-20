#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void recur(int pos, vector<int> &ans, vector<int> arr, int n, int sum)
    {
        if (pos >= n)
        {
            ans.push_back(sum);
            return;
        }
        sum = sum + arr[pos];
        recur(pos + 1, ans, arr, n, sum);
        sum = sum - arr[pos];
        recur(pos + 1, ans, arr, n, sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        int sum = 0;
        recur(0, ans, arr, N, sum);
        return ans;
    }
};
int main()
{
    return 0;
}