class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<long long,long long>>>adj(n);
        long long mod = 1e9+7;
        for(auto& road : roads){
            adj[road[0]].push_back({road[1], road[2]});
            adj[road[1]].push_back({road[0], road[2]});
        }
        vector<long long> dist(n, LLONG_MAX);
        vector<long long> ways(n, 0);
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;
        
        dist[0] = 0;
        ways[0] = 1;
        pq.push({0, 0});
        
        while(!pq.empty()){
            auto [d, node] = pq.top();
            pq.pop();
            
            if(d > dist[node]) continue;
            
            for(auto& [adjNode, weight] : adj[node]){
                long long newDist = d + weight;
                if(newDist < dist[adjNode]){
                    dist[adjNode] = newDist;
                    ways[adjNode] = ways[node]; //it well get 1 because for src we put 1 in the ways array 
                    pq.push({newDist, adjNode});
                }
                else if(newDist == dist[adjNode]){
                    ways[adjNode] = (ways[adjNode] + ways[node]) % mod; //will add however many times the previous node can be reached
                }
            }
        }
        
        return ways[n-1];
    }
};
