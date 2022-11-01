class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i, int j) {
        if (i==size(grid)) {
            return j;
        }
        if (grid[i][j]==1) {
            if (j==size(grid[0])-1) {
                return -1;
            } else if (grid[i][j+1]==-1) {
                return -1;
            } else {
                return dfs(grid,i+1,j+1);
            }
        } else {
            if (j==0) {
                return -1;
            } else if (grid[i][j-1]==1) {
                return -1;
            } else {
                return dfs(grid,i+1,j-1);
            }
        }
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> res;
        for (int i=0; i<size(grid[0]); ++i) {
            res.push_back(dfs(grid,0,i));
        }
        return res;
    }
};
