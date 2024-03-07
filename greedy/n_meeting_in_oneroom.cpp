#include <bits/stdc++.h>
using namespace std;
    static bool comp(pair<int,int>p1,pair<int,int>p2){
        if(p2.second>p1.second){
            return true;
        }
        return false;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>vec;
        for(int i{0};i<n;i++){
            pair<int,int>temp={start[i],end[i]};
            vec.push_back(temp);
        }
        sort(vec.begin(),vec.end(),comp);
        
        int count=1;
        int last=vec[0].second;
        for(int i{1};i<n;i++){
           
            if(vec[i].first>last){
                count++;
                last=vec[i].second;
            }
        }
        return count;
    }

int main(){
  return 0;
}
