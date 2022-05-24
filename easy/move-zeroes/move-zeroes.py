class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        arr = [];
        for i in range(0, len(nums), 1):
            if nums[i] == 0:
                arr.append(i)
            if nums[i] != 0 and len(arr) > 0:
                temp = nums[i]
                nums[i] = 0
                a = arr[0]
                arr.remove(arr[0])
                nums[a] = temp
                arr.append(i)
        return nums
