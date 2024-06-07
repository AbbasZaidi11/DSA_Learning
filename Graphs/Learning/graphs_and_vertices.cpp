//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
 long long count(int n) {
        //total edges possible 

        /*

           since every node can be connected to n-1 other nodes so for n nodes total edges possible are n*(n-1) OR n*n(if 

           self node is allowed) but since here undirected graph is being considered so edge from a to b would be same as edge 

           from b to a and hence divided by 2;

        */

        int total_edges=n*(n-1)/2;

        //now for every edge we have two options whether to consider it or not 

        return 1ll*pow(2,total_edges);

    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.count(n) << "\n";
    }

    return 0;
}

// } Driver Code Ends
