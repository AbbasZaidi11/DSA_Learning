#include <bits/stdc++.h>
using namespace std;
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=0;
    	int j=0;
    	int ans=INT_MIN;
    	int platform_c=0;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        platform_c++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        platform_c--;
    	        j++;
    	    }
    	    ans=max(ans,platform_c);
    	}
    	return ans;
    }

int main(){
  return 0;
}
