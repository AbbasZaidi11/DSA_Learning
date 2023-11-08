#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }
        if (dividend == INT_MIN && divisor == 1)
        {
            return INT_MIN;
        }
        long long dd = abs(dividend);
        long long dv = abs(divisor);

        int ans = 0;
        while (dv <= dd)
        {
            long long sum = dv;
            long long count = 1;
            while (sum <= dd - sum)
            {
                sum += sum;
                count += count;
            }
            ans += count;
            dd -= sum;
        }
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
        {
            return -ans;
        }
        return ans;
    }
};
int main()
{
    return 0;
}