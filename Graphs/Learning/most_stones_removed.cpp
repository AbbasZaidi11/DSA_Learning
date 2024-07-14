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

class Solution {
public:
 

    int removeStones(vector<vector<int>>& stones) 
    {
        int n=stones.size();
        int maxRow=0;
        int maxCol=0;
        for(auto it:stones){
            maxRow=max(maxRow,it[0]);
            maxCol=max(maxCol,it[1]);
        }
        DisjointSet ds(maxRow+maxCol+1);
        unordered_map<int,int>stoneNodes;
        for(auto it:stones){
            int nodeRow=it[0];
            int nodeCol=it[1]+maxRow+1;
            ds.unionBySize(nodeRow,nodeCol);
            stoneNodes[nodeRow]=1;
            stoneNodes[nodeCol]=1;
        }
        int cnt=0;
        for(auto it:stoneNodes){
            if(ds.findPar(it.first)==it.first){
                cnt++;
            }
        }
        return n-cnt;
    }
};
