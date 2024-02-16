#include <bits/stdc++.h>
using namespace std;
void zigZag(int arr[], int n) {
        // code here
        for(int i{1};i<=n-1;i+=2){
            if(arr[i]<arr[i-1]){
                swap(arr[i],arr[i-1]);
            }
            if(i+1!=n){
                 if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
            }
           
        }
    }

int main(){
  return 0;
}
