//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n=matrix.size();
	    
	    for(int via{0};via<n;via++){
	        for(int i{0};i<matrix.size();i++){
	            for(int j{0};j<n;j++){
	                if(i!=j && matrix[i][via]!=-1
	                && matrix[via][j]!=-1 && matrix[i][j]>matrix[i][via]+matrix[via][j]){
	                    matrix[i][j]=matrix[i][via]+matrix[via][j];
	                }
	                else if(matrix[i][j]==-1 && matrix[i][via]!=-1 && matrix[via][j]!=-1){
	                    matrix[i][j]=matrix[i][via]+matrix[via][j];
	                }
	            }
	        }
	    }

	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends
