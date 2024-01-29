#include <bits/stdc++.h>
using namespace std;
int totalFruit(vector<int> &fruits)
{
    int n = fruits.size();
    int j = 0;
    map<int, int> mpp;
    int ans = 0;
    int maxi = INT_MIN;
    int i = 0;
    while (i < n)
    {
        mpp[fruits[i]]++;
        if (mpp.size() > 2)
        {
            while (mpp.size() > 2 && j <= i)
            {
                mpp[fruits[j]]--;
                if (mpp[fruits[j]] == 0)
                {
                    mpp.erase(fruits[j]);
                }
                j++;
            }
        }
        maxi = max(maxi, i - j + 1);
        i++;
    }
    return maxi;
}

int main()
{
    return 0;
}