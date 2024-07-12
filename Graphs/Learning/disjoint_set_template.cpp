#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
public:
    vector<int> rank;
    vector<int> parent;
    DisjointSet(int n)
    {
        rank.resize(n + 1);
        fill(rank.begin(), rank.end(), 0);
        parent.resize(n + 1);
        for (int i{0}; i < n + 1; i++)
        {
            parent[i] = i;
        }
    }
    int findPar(int u)
    {
        if (u == parent[u])
        {
            return u;
        }
        return findPar(parent[u]);
    }
    void unionByRank(int u, int v)
    {
        int ult_u = findPar(u);
        int ult_v = findPar(v);
        if (ult_u == ult_v)
        {
            return;
        }
        int parentRank_u = rank[ult_u];
        int parentRank_v = rank[ult_v];
        if (parentRank_u < parentRank_v)
        {
            parent[ult_u] = ult_v;
        }
        else if (parentRank_u > parentRank_v)
        {
            parent[ult_v] = ult_u;
        }
        else
        {
            parent[ult_v] = ult_u;
            rank[ult_u]++;
        }
    }
};
int main()
{
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);
    if (ds.findPar(3) == ds.findPar(7))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    ds.unionByRank(3, 7);
    if (ds.findPar(3) == ds.findPar(7))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
