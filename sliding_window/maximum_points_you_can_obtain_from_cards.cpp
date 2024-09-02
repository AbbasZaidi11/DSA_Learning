class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        if(k==n){
            int sum=accumulate(cardPoints.begin(),cardPoints.end(),0);
            return sum;
        }
        int lsum=0;
        int rsum=0;
        int maxsum=0;
        for(int i{0};i<=k-1;i++){
            lsum+=cardPoints[i];
        }
        maxsum=max(maxsum,lsum);
        int rIndex=n-1;
        for(int i{k-1};i>=0;i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[rIndex];
            rIndex-=1;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};
