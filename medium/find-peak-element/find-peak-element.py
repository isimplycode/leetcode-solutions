class Solution(object):
    def findPeakElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 0 or len(nums) == 1:
            return 0
        if len(nums) == 2:
            return 1 if nums[1] > nums[0] else 0
        l = 0 
        r = len(nums)-1
        while l < r:
            m = (l + r) // 2
            if nums[m]>nums[m-1] and nums[m]>nums[m+1]:
                return m
            if nums[r]>nums[r-1]:
                return r
            if nums[l] > nums[l+1]:
                return l
            if (m == 0 and nums[m]>nums[m+1]):
                return m
            if nums[m]<nums[m-1]:
                r = m - 1
            elif nums[m]<nums[m+1]:
                l = m + 1
