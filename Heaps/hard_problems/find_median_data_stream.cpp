#include <bits/stdc++.h>
using namespace std;
class MedianFinder
{
public:
    multiset<int> st;
    MedianFinder()
    {
    }

    void addNum(int num)
    {
        st.insert(num);
    }

    double findMedian()
    {
        int n = st.size();
        double ans = 0;
        if (st.empty())
        {
            return ans;
        }
        int counter = 0;
        auto it = st.begin();
        if (n % 2 != 0)
        {
            while (it != st.end())
            {
                counter++;
                if (counter == ((n / 2) + 1))
                {
                    ans = *it;
                    break;
                }
                it++;
            }
        }
        else
        {
            double t1 = 0;
            double t2 = 0;
            while (it != st.end())
            {
                counter++;
                if (counter == (n / 2))
                {
                    t1 = *it;
                }
                if (counter == (n / 2) + 1)
                {
                    t2 = *it;
                    break;
                }

                it++;
            }
            ans = (t1 + t2) / 2;
        }
        return ans;
    }
};

int main()
{
    return 0;
}