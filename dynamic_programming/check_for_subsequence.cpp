//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string a, string b) 
    {
        // code here
        queue<char>q;
        for(int i{0};i<a.size();i++){
            q.push(a[i]);
        }
        for(int i{0};i<b.size();i++){
            if(!q.empty() && b[i]==q.front()){
                q.pop();
            }
        }
        if(q.empty()){
            return true;
        }
        return false;

    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 

// } Driver Code Ends
