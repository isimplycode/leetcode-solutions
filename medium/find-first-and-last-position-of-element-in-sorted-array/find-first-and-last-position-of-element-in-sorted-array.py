def firstPos(nums, target):
    n = len(nums)
    firstPos = n
    min = 0 
    max = len(nums)-1
    if n == 0:
        return 0
    while min <= max:
        m = min + (max-min) // 2
        if nums[m] >= target:
            firstPos = m
            max = m - 1
        if nums[m] < target:
            min = m + 1
    return firstPos
class Solution(object):

    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        first = firstPos(nums, target)
        last = firstPos(nums,target+1) - 1
        if first <= last:
            return [first, last]
        return [-1,-1]
        
