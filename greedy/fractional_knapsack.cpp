#include <bits/stdc++.h>
using namespace std;
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(Item one,Item two){
        double ratio1=(1.0*one.value)/one.weight;
        double ratio2=(1.0*two.value)/two.weight;
        if(ratio1>ratio2){
             return true;
        }
        else if(ratio1==ratio2){
            if(one.weight<two.weight){
                return true;
            }
        }
        return false;
    }
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        // Your code here
        double ans=0;
        double weight=0;
        sort(arr,arr+n,comp);
        for(int i{0};i<n;i++){
            
            if(weight+(arr[i].weight)<=w){
                weight+=arr[i].weight;
                ans+=arr[i].value;
                continue;
            }
            if(weight==w){
                return ans;
            }
            
            if(weight+(arr[i].weight)>w){
                double diff=1.0*(w-weight);
                weight+=diff;
                double value=((1.0*arr[i].value)/arr[i].weight)*diff;
                ans+=value;
            }
            if(weight==w){
                return ans;
            }
        }
        return ans;
    }

int main(){
  return 0;
}
