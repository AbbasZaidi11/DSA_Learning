#include <bits/stdc++.h>
using namespace std;
int jump(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    int count = 0;
    while (i < n)
    {
        if (i == n - 1)
        {
            break;
        }
        int k = nums[i];
         if (i + k >= (n-1))
        {
            count++;
            break;
        }

        int indi = -1;
        int maxi = INT_MIN;
        while (k > 0)
        {

            if ((i + k) < n && nums[i + k] > maxi)
            {
                if(indi==-1 || maxi==INT_MIN){
                  indi = i + k;
                  maxi = nums[i + k];
                }
                else {
                    if(nums[i+k]-maxi>indi-(i+k)){
                        indi=i+k;
                        maxi=nums[i+k];
                    }
                }
            }
            k--;
        }
        count++;
        i = indi;
    }
    return count;
    }

int main(){
  return 0;
}
