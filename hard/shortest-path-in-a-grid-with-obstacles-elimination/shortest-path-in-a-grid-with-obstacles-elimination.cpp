class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        queue<vector<int>> q;
        vector<vector<int>> vis(size(grid), vector<int>(size(grid[0]), -1));
        q.push({0,0,k,0}); 
        while (q.size()) {
            int x=q.front()[0],y=q.front()[1],r=q.front()[2],res=q.front()[3];
            q.pop(); 
            if (x==size(grid[0])-1&&y==size(grid)-1) {
                return res;
            }
            if (x<0||y<0||x>=size(grid[0])||y>=size(grid)) {
                continue;
            }
            if (grid[y][x]==1) {
                if (r==0) {
                    continue;
                }
                r--;
            }
            if (vis[y][x]!=-1&&vis[y][x]>=r) {
                continue;
            }
            vis[y][x]=r;
            q.push({x-1,y,r,res+1});
            q.push({x+1,y,r,res+1});
            q.push({x,y-1,r,res+1});
            q.push({x,y+1,r,res+1});
        }
        return -1;
    }
};
