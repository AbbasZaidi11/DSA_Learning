class Solution {
public:
    int recur(int i,int n,vector<int>&nums,vector<int>&dp){
        if(i>=n){
            return 0;
        }
        if(i==n-1){
                return dp[i]=nums[i];
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int one_hop=recur(i+1,n,nums,dp);
        int two_hop=recur(i+2,n,nums,dp)+nums[i];
        return dp[i]=max(one_hop,two_hop);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        if(n==2){
            if(nums[0]>nums[1]){
                return nums[0];
            }
            return nums[1];
        }
        vector<int>dp(n+1,-1);
        int taking_first=recur(0,n-1,nums,dp);
        fill(dp.begin(),dp.end(),-1);
        int not_taking_first=recur(1,n,nums,dp);
        return max(taking_first,not_taking_first);
    }
};
