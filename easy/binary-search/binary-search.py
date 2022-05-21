class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        
        left_bound = 0
        right_bound = len(nums) - 1
        while left_bound <= right_bound:
            midpoint = left_bound + (right_bound - left_bound) // 2
            if nums[midpoint] == target:
              return midpoint
            if nums[midpoint] > target:
              right_bound = midpoint - 1
            if nums[midpoint] < target:
              left_bound = midpoint + 1
        return -1
      
