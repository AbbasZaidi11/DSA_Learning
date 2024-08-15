//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void insert(int k,stack<int>&St){
        if(St.size()==0){
            St.push(k); return ;
        }
        int val=St.top();
        St.pop();
        insert(k,St);
        St.push(val);
        
    }
    void Reverse(stack<int> &St){
        if(St.size()==0){
            return ;
        }
        int k=St.top();
        St.pop();
        Reverse(St);
        insert(k,St);
    }

};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends
