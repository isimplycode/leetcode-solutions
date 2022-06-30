class Solution {
public:
    int maxa=0;
    int maxcol=0;
    int maxrow=0;
    int vis[50][50];
    
    void dfs(int i, int j,const vector<vector<int>> grid) {
        if (grid[i][j]!=1) return;
        maxa++;
        vis[i][j]=1;
        if (i>0&&!vis[i-1][j])
            dfs(i-1,j,grid);
        if (j>0&&!vis[i][j-1])
            dfs(i,j-1,grid);
        if (i<maxrow-1&&!vis[i+1][j])
            dfs(i+1,j,grid);
        if (j<maxcol-1&&!vis[i][j+1])
            dfs(i,j+1,grid);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res=0;
        maxcol=size(grid[0]);
        maxrow=size(grid);
        for (int i=0; i<maxrow; ++i) {
            for (int j=0; j<maxcol; ++j) {
                vis[i][j]=0;
            }
        }
        for (int i=0; i<maxrow; ++i) {
            for (int j=0; j<maxcol; ++j) {
                if (grid[i][j]==1&&!vis[i][j]) {
                    maxa=0;
                    dfs(i,j,grid);
                    res=max(res,maxa);
                }
            }
        }
        return res;
    }
};
