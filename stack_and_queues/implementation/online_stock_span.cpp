#include <bits/stdc++.h>
using namespace std;
class StockSpanner
{
public:
    int size;
    vector<int> vec;
    StockSpanner()
    {
        size = 0;
        vec.resize(size);
    }

    int next(int price)
    {
        vec.push_back(price);
        size += 1;
        int k = 0;
        for (int i{size - 1}; i >= 0; i--)
        {
            if (vec[i] <= price)
            {
                k += 1;
            }
            else
            {
                break;
            }
        }
        if (size == 1)
        {
            return 1;
        }
        return k;
    }
};

int main()
{
    return 0;
}