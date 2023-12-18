#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to find if there is a celebrity in the party or not.
    bool knows(int a, int b, vector<vector<int>> &M)
    {
        if (M[a][b] == 1)
        {
            return true;
        }
        return false;
    }
    int celebrity(vector<vector<int>> &M, int n)
    {
        // code here
        stack<int> st;
        for (int i{0}; i < n; i++)
        {
            st.push(i);
        }

        while (st.size() > 1)
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if (knows(a, b, M) == true)
            {
                st.push(b);
            }
            else
            {
                st.push(a);
            }
        }
        bool row_empty = true;
        int potential = st.top();
        for (int i{0}; i < n; i++)
        {
            if (M[potential][i] == 1)
            {
                row_empty = false;
            }
        }
        int cnt = 0;
        bool col_empty = true;
        for (int i{0}; i < n; i++)
        {
            if (M[i][potential] == 1)
            {
                cnt++;
            }
        }
        if (cnt == (n - 1))
        {
            col_empty = true;
        }
        else
        {
            col_empty = false;
        }
        if (row_empty && col_empty)
        {
            return potential;
        }
        return -1;
    }
};
int main()
{
    return 0;
}