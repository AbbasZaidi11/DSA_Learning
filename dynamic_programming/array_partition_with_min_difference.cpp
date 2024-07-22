int minSubsetSumDifference(vector<int>& arr, int n)
{
	// Write your code here.
	int total_sum=0;
	for(int i{0};i<arr.size();i++){
		total_sum+=arr[i];
	}
	int start_sum=total_sum/2;

	for(int i{0};i<=start_sum+1;i++){
		vector<vector<int>>dp(n+1,vector<int>(start_sum+i+1,0));
		for(int j{0};j<n+1;j++){
			for(int k{0};k<start_sum+i+1;k++){
				if(k==0){
					dp[j][k]=1;//initializing the array for all the true cases 
				}
			}
		}
		for(int j{1};j<n+1;j++){
			for(int k{1};k<start_sum+i+1;k++){
				if(arr[j-1]<=k){
					dp[j][k]=dp[j-1][k] || dp[j-1][k-arr[j-1]];
				}else{
					dp[j][k]=dp[j-1][k];
				}
			}
		}
		if(dp[n][start_sum+i]==1){
			int diff=abs(total_sum-(start_sum+i));//i.e. the remaining half
			return abs(i-diff+start_sum);
		}

	}
	return -1;

}
