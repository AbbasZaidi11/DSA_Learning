#include <bits/stdc++.h>
using namespace std;
class StockSpanner
{
public:
    stack<int> prices;
    stack<int> span;

    StockSpanner()
    {
    }

    int next(int price)
    {
        if (prices.empty() == true || price < prices.top())
        {
            prices.push(price);
            span.push(1);
            return 1;
        }
        int ans = 1;
        while (!prices.empty() && price >= prices.top())
        {
            ans = ans + span.top();
            span.pop();
            prices.pop();
        }
        prices.push(price);
        span.push(ans);
        return ans;
    }
};
int main()
{
    return 0;
}