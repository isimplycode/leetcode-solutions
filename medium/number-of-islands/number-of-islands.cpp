class Solution {
public:
    int vis[300][300];
    void dfs(int i,int j,vector<vector<char>> &grid) {
        if (vis[i][j]) return;
        vis[i][j]=1;
        if (i>0) {
            if (grid[i-1][j]=='1'&&!vis[i-1][j]) {
                dfs(i-1,j,grid);
            }
        }
        if (j>0) {
            if (grid[i][j-1]=='1'&&!vis[i][j-1]) {
                dfs(i,j-1,grid);
            }
        }
        if (i<size(grid)-1) {
            if (grid[i+1][j]=='1'&&!vis[i+1][j]) {
                dfs(i+1,j,grid);
            }
        }
        if (j<size(grid[0])-1) {
            if (grid[i][j+1]=='1'&&!vis[i][j+1]) {
                dfs(i,j+1,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int res=0;
        for (int i=0; i<size(grid); ++i) {
            for (int j=0; j<size(grid[0]); ++j) {
                vis[i][j]=0;
            }
        }
        for (int i=0; i<size(grid); ++i) {
            for (int j=0; j<size(grid[0]); ++j) {
                if (grid[i][j]=='1'&&!vis[i][j]) {
                    dfs(i,j,grid);
                    res++;
                }
            }
        }
        return res;
    }
};
/* without vis array; better memory; bad in general to mutate data
class Solution {
public:
    void dfs(int i,int j,vector<vector<char>> &grid) {
        grid[i][j]='0';
        if (i>0) {
            if (grid[i-1][j]=='1') {
                dfs(i-1,j,grid);
            }
        }
        if (j>0) {
            if (grid[i][j-1]=='1') {
                dfs(i,j-1,grid);
            }
        }
        if (i<size(grid)-1) {
            if (grid[i+1][j]=='1') {
                dfs(i+1,j,grid);
            }
        }
        if (j<size(grid[0])-1) {
            if (grid[i][j+1]=='1') {
                dfs(i,j+1,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int res=0;
        for (int i=0; i<size(grid); ++i) {
            for (int j=0; j<size(grid[0]); ++j) {
                if (grid[i][j]=='1') {
                    dfs(i,j,grid);
                    res++;
                }
            }
        }
        return res;
    }
}; */
