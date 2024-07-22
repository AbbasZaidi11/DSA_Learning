class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int total_sum=0;
        int n=nums.size();
        for(int i{0};i<nums.size();i++){
            total_sum+=nums[i];
        }
        if(abs(target)>abs(total_sum)){
            return 0;
        }
        int required=(total_sum+target)/2;
        if((target+total_sum)%2 != 0) return 0;
 
       
        
        long long mod=1e9+7;
        int ans=0;            
        //sum of the first half is at the very least,either equal 
        //or greater than and equal to i
        vector<vector<int>>dp(n+1,vector<int>(required+1,0));
        dp[0][0]=1;
            
        for(int a{1};a<n+1;a++){
                for(int b{0};b<required+1;b++){
                    if(nums[a-1]<=b){
                        dp[a][b]=(dp[a-1][b]+dp[a-1][b-nums[a-1]])%mod;
                    }else{
                        dp[a][b]+=dp[a-1][b];
                    }
                }
            }
       
        return dp[n][required];

    }
};
