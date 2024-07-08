class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        
        q.push({0,{0,0}});//distance and coordinates
        vector<int>delrow={+1,0,-1,0};
        vector<int>delcol={0,+1,0,-1};
        vector<vector<int>>distance(n,vector<int>(m,1e9));
        distance[0][0]=0;

        while(!q.empty()){
            auto p=q.top();
            int diff=p.first;
            int row=p.second.first;
            int col=p.second.second;
            if(row==n-1 && col==m-1){
                return diff;
            }
            q.pop();
                for(int i{0};i<4;i++){
                int nrow=delrow[i]+row;
                int ncol=delcol[i]+col;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m){
                    int newEffort=max(abs(heights[row][col]-heights[nrow][ncol]),diff);
                    if(distance[nrow][ncol]>newEffort){
                        distance[nrow][ncol]=newEffort;
                        q.push({newEffort,{nrow,ncol}});

                    }
                }
            }
        }
        return -1;

    }
};
