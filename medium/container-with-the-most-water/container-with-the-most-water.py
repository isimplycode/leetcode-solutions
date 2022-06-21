class Solution:
    def maxArea(self, height: List[int]) -> int:
        l=0
        r=len(height)-1
        maxmax=0
        while (l<r):
            maxmax=max(maxmax,min(height[r],height[l])*(r-l))
            if height[l]<height[r]:
                l+=1
            else:
                r-=1
        return maxmax
