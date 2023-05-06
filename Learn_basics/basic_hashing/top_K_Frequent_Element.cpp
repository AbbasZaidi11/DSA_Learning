#include <bits/stdc++.h>
#include <map>
#include <vector>

using namespace std;
bool comp(pair<int, int> &p1, pair<int, int> &p2)
{

    if (p1.second > p2.second)
        return true;
    if (p1.second < p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
};
int main()
{
    int n = 8;
    cin >> n;
    int arr[n];
    int k;
    cin >> k;
    for (int i{0}; i < n; i += 1)
    {
        cin >> arr[i];
    }
    map<int, int> mpp; // USE unordered_map for improved time complexity .
    for (auto it : arr)
    {
        mpp[it] += 1;
    }
    vector<pair<int, int>> vec;
    for (auto it : mpp)
    {
        vec.push_back(make_pair(it.first, it.second));
    }
    sort(vec.begin(), vec.end(), comp);
    for (int i{0}; i < k; i += 1)
    {
        cout << vec.at(i).first << " ";
    }
    return 0;
}

// vector<pair<int, int>>v;
//         unordered_map<int, int>mp;
//         vector<int>ans;
//         for(int i=0; i<nums.size(); i++){
//             mp[nums[i]]++;
//         }
//         for(auto x: mp){
//             v.push_back({x.second, x.first});
//         }
//         sort(v.rbegin(), v.rend()); SORT IN DESCENDING ORDER / REVERSE ORDER
//         for(int i=0; i<k; i++){
//             ans.push_back(v[i].second);
//         }
//         return ans;