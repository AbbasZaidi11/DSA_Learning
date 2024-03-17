#include <bits/stdc++.h>
using namespace std;
    bool checkValidString(string s) {
        int n=s.size();
        stack<int>st1;
        stack<int>st2;
        for(int i{0};i<n;i++){
            if(s[i]=='('){
                st1.push(i);
            }
            else if(s[i]=='*'){
                st2.push(i);
            }
            else{
                if(!st1.empty()){
                    st1.pop();
                }
                else if(!st2.empty()){
                    st2.pop();
                }
                else{
                    return false;
                }
            }
        }
        while(!st1.empty()){
            if(st2.empty()){
                return false;
            }
            else{
                if(st1.top()>st2.top()){
                    return false;
                }
                else{
                    st2.pop();
                    st1.pop();
                }
            }
        }
        return true;

        
    }

int main(){
  return 0;
}
