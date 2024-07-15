
        int result = maxIslandSize;

        for (int i{0}; i < n; i++) {
            for (int j{0}; j < n; j++) {
                if (grid[i][j] == 0) {
                    unordered_set<int> connectedIslands;
                    for (int z{0}; z < 4; z++) {
                        int nrow = delrow[z] + i;
                        int ncol = delcol[z] + j;
                        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && grid[nrow][ncol] == 1) {
                            int root = ds.findPar(nrow * n + ncol);
                            //finding out the connections of the surrounding nodes of '0'
                            connectedIslands.insert(root);
                        }
                    }
                    int newSize = 1;//we are converting 0 to 1
                    for (int root : connectedIslands) {
                        newSize += islandSize[root];//the sizes of the surrounding islands
                    }
                    result = max(result, newSize);
                }
            }
        }

        return result;
    }
};
