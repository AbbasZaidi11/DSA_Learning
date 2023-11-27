#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left;
        vector<int>right;
        int left_high=INT_MIN;
        int right_high=INT_MIN;
        int n=height.size();
        left.resize(n);
        right.resize(n);
        int j=n;
        for(int i=0;i<n;i++){
            j-=1;
            if(height[i]>left_high){
                left_high=height[i];
            }
            if(height[j]>right_high){
                right_high=height[j];
            }
            left[i]=left_high;
            right[j]=right_high;
            
        }
        int ans=0;
        for(int i{0};i<n;i++){
            int mini=min(left[i],right[i]);
            int k=mini-height[i];
            if(k>0){
                ans=ans+k;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}