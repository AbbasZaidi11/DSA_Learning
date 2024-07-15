//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
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
class Solution {
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        // code here
        int n=accounts.size();
        DisjointSet ds(n);
        unordered_map<string,int>mapMailNode;
        //for each email we are assigning a node number
        for(int i{0};i<n;i++){
            for(int j{1};j<accounts[i].size();j++){
                string mail=accounts[i][j];
                if(mapMailNode.find(mail)==mapMailNode.end()){
                    mapMailNode[mail]=i;
                }else{
                    //ie the node already exists ultimate parent is selected for that particular string
                    ds.unionByRank(i,mapMailNode[mail]);
                }
            }
        }
        vector<vector<string>>mergedMail(n);
        //only the ultimate parents get their respective string rest of the vectors are left out empty
        for(auto it:mapMailNode){
            string mail=it.first;
            int node=ds.findPar(it.second);
            //finding the ultimate parent for all the string and adding them to their particular positions
            mergedMail[node].push_back(mail);
        }
        vector<vector<string>>ans;
        for(int i{0};i<n;i++){
            if(mergedMail[i].size()==0)continue;
            sort(mergedMail[i].begin(),mergedMail[i].end());
            //sorting the email addresses
            vector<string>temp;
            temp.push_back(accounts[i][0]);
            for(auto it:mergedMail[i]){
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        return ans;

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<string>> accounts;

        for (int i = 0; i < n; i++) {
            vector<string> temp;
            int x;
            cin >> x;

            for (int j = 0; j < x; j++) {
                string s1;
                cin >> s1;
                temp.push_back(s1);
            }
            accounts.push_back(temp);
        }

        ///
        Solution obj;
        vector<vector<string>> res = obj.accountsMerge(accounts);
        sort(res.begin(), res.end());
        cout << "[";
        for (int i = 0; i < res.size(); ++i) {
            cout << "[";
            for (int j = 0; j < res[i].size(); j++) {
                if (j != res[i].size() - 1)
                    cout << res[i][j] << ","
                         << " ";
                else
                    cout << res[i][j];
            }
            if (i != res.size() - 1)
                cout << "], " << endl;
            else
                cout << "]";
        }
        cout << "]" << endl;
    }
}
// } Driver Code Ends
