class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res=[1]*len(nums)
        sumsum=1
        for i in range(0,len(nums),1):
            res[i]*=sumsum
            sumsum*=nums[i]
        sumsum=1
        for i in range(len(nums)-1,-1,-1):
            res[i]*=sumsum
            sumsum*=nums[i]
        return res
