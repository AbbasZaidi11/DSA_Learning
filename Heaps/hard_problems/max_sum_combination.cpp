#include <bits/stdc++.h>
using namespace std;
vector<int> maxCombinations(int n, int k, vector<int> &A, vector<int> &B)
{
    // code here
    priority_queue<int, vector<int>, greater<int>> p;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    vector<int> ans = {};
    for (int i{n - 1}; i > n - k - 1; i--)
    { // We are doing n iterations basically from the n-1 which is the largest element to the n-k element which the kth largest element
        for (int j{n - 1}; j > n - k - 1; j--)
        {

            int sum = A[i] + B[j];
            if (p.size() < k)
            {
                p.push(sum);
            }
            else
            {
                if (p.top() < sum)
                {
                    p.pop();
                    p.push(sum);
                }
                else
                {
                    break;
                }
            }
        }
    }
    while (p.size() > 0)
    {
        ans.push_back(p.top());
        p.pop();
    }
    sort(ans.rbegin(), ans.rend());
    return ans;
}

int main()
{
    return 0;
}