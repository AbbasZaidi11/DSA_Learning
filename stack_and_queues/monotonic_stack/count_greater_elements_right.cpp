#include <bits/stdc++.h>
using namespace std;
vector<int> countGreater(vector<int> &arr, vector<int> &query)
{
    // Write your code here.
    int n = arr.size();
    stack<int> st;
    vector<int> ans;
    int m = query.size();

    for (int i{0}; i < m; i++)
    {
        int sum = 0;
        for (int k = query[i]; k < n; k++)
        {
            if (arr[query[i]] < arr[k])
            {
                sum++;
            }
        }
        ans.push_back(sum);
    }
    return ans;
}
int main()
{
    return 0;
}