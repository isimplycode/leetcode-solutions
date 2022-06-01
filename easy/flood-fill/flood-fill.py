class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        def dfs(r,c):
            if image[r][c] == color:
                image[r][c] = newColor
                if r >= 1: 
                    dfs(r-1,c)
                if r+1 < rowmax:
                    dfs(r+1,c)
                if c >= 1:
                    dfs(r, c-1)
                if c+1 < colmax:
                    dfs(r, c+1)
        rowmax = len(image)
        colmax = len(image[0])
        color = image[sr][sc]
        if color == newColor:
            return image
        dfs(sr,sc)
        return image
