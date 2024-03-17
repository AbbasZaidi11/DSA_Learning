#include <bits/stdc++.h>
using namespace std;
bool canJump(vector<int>& nums) {
        int n=nums.size();
        int goal=n-1;
        for(int i{n-1};i>=0;i--){
            if(nums[i]+i>=goal){
                goal=i;
            }
        }
        if(goal!=0){
            return false;
        }
        return true;
    }

int main(){
  return 0;
}
