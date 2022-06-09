class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if grid == []:
            return 0
        def dfs(y,x):
            if grid[y][x] != "1":
                return
            grid[y][x] = "0"
            if y >= 1:
                dfs(y-1,x)
            if x >= 1:
                dfs(y,x-1)
            if y < y_max-1:
                dfs(y+1,x)
            if x < x_max-1:
                dfs(y,x+1)
        y_max = len(grid)
        x_max = len(grid[0])
        island = 0
        for i in range(0,y_max,1):
            for j in range(0,x_max,1):
                if grid[i][j] == "1":
                    island += 1
                    dfs(i,j)
        return island
