#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minBitFlips(int start, int goal)
    {
        int xor_sum = start ^ goal;
        int cnt = 0;
        while (xor_sum)
        {
            if (xor_sum & 1)
            {
                cnt++;
            }
            xor_sum = (xor_sum >> 1);
        }
        return cnt;
    }
};
int main()
{
    return 0;
}