#include <bits/stdc++.h>
using namespace std;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>vec;
        sort(nums.begin(),nums.end());
        long long mod=1e9+7;
        int n=nums.size();
        for(int i{0};i<n;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j{i+1};j<n;j++){
               
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long int sum=(nums[i])%mod+(nums[j])%mod+(nums[k])%mod+(nums[l])%mod;
                    if(sum>target){
                        l--;
                        continue;
                    }
                    else if(sum<target){
                        k++;
                        continue;
                    }
                    else{
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        vec.insert(temp);
                        l--;
                        k++;

                        while(k<l && nums[k-1]==nums[k]){k++;}
                        while(k<l && nums[l]==nums[l+1]){l--;}
                    }
                }
            }
        }
        vector<vector<int>>ans={};

        if(vec.begin()==vec.end()){
            return ans;
        }        
        ans={vec.begin(),vec.end()};

        return ans;
    }

int main(){
  return 0;
}
