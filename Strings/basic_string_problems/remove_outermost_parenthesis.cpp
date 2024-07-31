//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
                int n=s.size();
        deque<char>st;
        int open_count=0;
        int close_count=0;
        string ans="";
        for(int i{0};i<n;i++){
            if(s[i]=='('){
                open_count++;
            }else{
                open_count--;
            }
            st.push_back(s[i]);

            if(open_count==0){
                if(st.size()>2){
                    st.pop_back();
                    st.pop_front();
                    while(!st.empty()){
                        ans.push_back(st.front());
                        st.pop_front();
                    }
                }else if(st.size()==2){
                    st.clear();
                }
            }
        }
        return ans;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends
