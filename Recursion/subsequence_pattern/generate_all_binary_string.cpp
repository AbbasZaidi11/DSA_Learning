//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void recur(string temp,vector<string>&ans,int num){
        if(num==0){
            ans.push_back(temp);
            return ;
        }
        if(temp.size() && temp.back()=='1'){
            temp.push_back('0');
            recur(temp,ans,num-1);
        }else{
            temp.push_back('0');
            recur(temp,ans,num-1);
            temp.pop_back();
            temp.push_back('1');
            recur(temp,ans,num-1);
            temp.pop_back();
        }
        
    }
    vector<string> generateBinaryStrings(int num){
        //Write your code
        vector<string>ans;
        string temp="";
        recur(temp,ans,num);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends
