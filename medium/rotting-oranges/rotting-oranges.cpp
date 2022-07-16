class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int res=0;
        queue<pair<int,int>> q;
        for (int i=0; i<size(grid); ++i) {
            for (int j=0; j<size(grid[0]); ++j) {
                if (grid[i][j]==2) {
                    q.push({i,j});
                }
            }
        }
        if (q.size()) {
            res--;
            while (q.size()) {
                res++;
                int qsize=q.size();
                for (int k=0; k<qsize; ++k) {
                    int a=q.front().first,b=q.front().second;
                    grid[a][b]=2;
                    q.pop();
                    if (a>0) {
                        if (grid[a-1][b]==1) {
                            grid[a-1][b]=2;
                            q.push({a-1,b});
                        }
                    }
                    if (b>0) {
                        if (grid[a][b-1]==1) {
                            grid[a][b-1]=2;
                            q.push({a,b-1});
                        }
                    }
                    if (a<size(grid)-1) {
                        if (grid[a+1][b]==1) {
                            grid[a+1][b]=2;
                            q.push({a+1,b});
                        }
                    }
                    if (b<size(grid[0])-1) {
                        if (grid[a][b+1]==1) {
                            grid[a][b+1]=2;
                            q.push({a,b+1});
                        }
                    }
                }    
            }
        }
        for (int i=0; i<size(grid); ++i) {
            for (int j=0; j<size(grid[0]); ++j) {
                if (grid[i][j]==1) return -1;
            }
        }
        return res;
    }
};
