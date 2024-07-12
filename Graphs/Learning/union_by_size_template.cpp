#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
public:
    vector<int> size;
    vector<int> parent;
    DisjointSet(int n)
    {
        size.resize(n + 1);
        fill(size.begin(), size.end(), 1);
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
    void unionBySize(int u, int v)
    {
        int ult_u = findPar(u);
        int ult_v = findPar(v);
        if (ult_u == ult_v)
        {
            return;
        }
        int parentSize_u = size[ult_u];
        int parentSize_v = size[ult_v];
        if (parentSize_u < parentSize_v)
        {
            parent[ult_u] = ult_v;
            size[ult_v] += size[ult_u];
        }
        else
        {
            parent[ult_v] = ult_u;
            size[ult_u] += size[ult_v];
        }
    }
};
int main()
{
    DisjointSet ds(7);
    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);
    if (ds.findPar(3) == ds.findPar(7))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    ds.unionBySize(3, 7);
    if (ds.findPar(3) == ds.findPar(7))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    cout << ds.size[4] << endl;
    return 0;
}
