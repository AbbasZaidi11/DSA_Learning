    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        int total_sum=0;
        for(int i{0};i<arr.size();i++){
            total_sum+=arr[i];
        }
        int half=total_sum/2;
        if(total_sum%2){
            half++;
        }
        long long mod=1e9+7;
        int ans=0;
        for(int i{half};i<=total_sum;i++){
            //sum of the first half is at the very least,either equal 
        //or greater than and equal to i
        int rem=abs(total_sum-i);
        if(abs(rem-i)!=d){continue;}
            vector<vector<int>>dp(n+1,vector<int>(i+1,0));
            int cnt=1;
            dp[0][0]=1;
            for(int j{0};j<n;j++){
                if(arr[j]==0){
                    cnt*=2;
                    dp[j+1][0]=cnt;
                }else{
                    dp[j+1][0]=dp[j][0];//setting zeroes and stuff lol
                }
            }
            for(int a{1};a<n+1;a++){
                for(int b{1};b<i+1;b++){
                    if(arr[a-1]<=b){
                        dp[a][b]=(dp[a-1][b]+dp[a-1][b-arr[a-1]])%mod;
                    }else{
                        dp[a][b]=dp[a-1][b];
                    }
                }
            }
            return dp[n][i];
            
        }
        return 0;
    }
