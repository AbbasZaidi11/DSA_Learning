#include <bits/stdc++.h>
using namespace std;
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        unordered_map<int,int>mpp;
        for(int i{0};i<n;i++){
            if(bills[i]==5){
                mpp[5]++;
            }
            else if(bills[i]==10){
                mpp[10]++;
                if(mpp[5]!=0){
                    mpp[5]--;
                }
                else{
                    return false;
                }
            }
            else if(bills[i]==20){
                mpp[20]++;
                if(mpp[10]!=0 && mpp[5]!=0){
                    mpp[10]--;
                    mpp[5]--;
                }else if(mpp[5]>=3){
                    mpp[5]-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }

int main(){
  return 0;
}
