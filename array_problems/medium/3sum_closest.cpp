#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 4;
    int A[N] = {-1, 2, 1, -4};
    int X = 1;

    sort(A, A + N);
    int mini = INT_MAX;
    int res = 0;
    for (int i{0}; i < N; i++)
    {
        if (i > 0 && A[i - 1] == A[i])
        {
            continue;
        }
        int j = i + 1;
        int k = N - 1;
        while (j < k)
        {
            int sum = A[i] + A[j] + A[k];

            if (sum < X)
            {
                j++;
            }
            else if (sum > X)
            {
                k--;
            }
            else
            {
                cout << sum;
            }
            if (abs(X - sum) < mini)
            {
                mini = abs(X - sum);
                res = sum;
            }
        }
    }
    cout << res;

    return 0;
}