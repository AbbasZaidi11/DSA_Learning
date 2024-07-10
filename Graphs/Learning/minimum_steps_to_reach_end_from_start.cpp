//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:

    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        vector<int>distance(99999,INT_MAX);//goals and distance
        distance[start]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,start});//steps and start to have the shortest steps on top
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            int steps=p.first;
            int node=p.second;
            for(auto a:arr){
                int adjNode=(node*a)%100000;
                int edgeW=steps+1;
                if(distance[adjNode]>edgeW){
                    distance[adjNode]=edgeW;
                    pq.push({edgeW,adjNode});
                }
            }
        }
        if(distance[end]==INT_MAX){return -1;}
        return distance[end];
        

    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends
