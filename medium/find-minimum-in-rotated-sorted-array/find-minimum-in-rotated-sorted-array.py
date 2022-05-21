class Solution(object):
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 1: return nums[0]
        if len(nums) == 2: return nums[0] if nums[0] < nums[1] else nums[1]
        l = 0
        r = len(nums)-1
        while l<r:
            if nums[l] < nums[r]: return nums[l]
            m = (l + r) // 2
            if nums[m] > nums[m+1] and nums[l] > nums[m+1]:
                return nums[m+1]
            if nums[m-1] > nums[m] and nums[m+1] > nums[m]:
                return nums[m]
            if nums[len(nums)-1] < nums[len(nums)-2] and nums[len(nums)-1] < nums[l]:
                return nums[len(nums)-1]
            if nums[m+1] > nums[m] and nums[l] < nums[m+1]:
                l = m 
                continue
            if nums[m-1] < nums[m]:
                r = m
          
