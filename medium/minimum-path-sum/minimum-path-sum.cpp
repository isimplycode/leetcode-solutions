class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int maxx=size(grid[0]);
        int maxy=size(grid);
        int dp[maxy][maxx];
        for (int i=0; i<size(grid); ++i) {
            for (int j=0; j<size(grid[0]); ++j) {
                if (i>0&&j>0) 
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
                else if (i>0)
                    dp[i][j]=dp[i-1][j]+grid[i][j];
                else if (j>0)
                    dp[i][j]=dp[i][j-1]+grid[i][j];
                else
                    dp[i][j]=grid[i][j];
            }
        }
        return dp[maxy-1][maxx-1];
    }
};
