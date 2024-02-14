#include <bits/stdc++.h>
using namespace std;
bool isNStraightHand(vector<int> &hand, int groupSize)
{
    int n = hand.size();

    list<int> pq;
    unordered_map<int, int> mpp;
    for (int i{0}; i < n; i++)
    {
        pq.push_back(hand[i]);
        mpp[hand[i]]++;
    }
    pq.sort();
    bool ans = true;
    while (!pq.empty())
    {
        int min = pq.front();
        int k = 1;
        if (mpp[min] == 0)
        {
            pq.pop_front();
            continue;
        }
        pq.pop_front();
        mpp[min]--;
        if (mpp[min] == 0)
        {
            mpp.erase(min);
        }
        for (int i{0}; i < groupSize - 1; i++)
        {
            if (mpp[min + 1] != 0)
            {
                mpp[min + 1]--;
                if (mpp[min + 1] == 0)
                {
                    mpp.erase(min + 1);
                }
                k++;
            }
            min = min + 1;
        }
        if (k < groupSize)
        {
            return false;
        }
    }
    return ans;
}

int main()
{
    vector<int> hand = {8, 10, 12};
    int groupSize = 3;
    cout << isNStraightHand(hand, groupSize) << endl;
    return 0;
}