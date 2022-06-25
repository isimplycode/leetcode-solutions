class Solution:
    def checkPossibility(self, nums: List[int]) -> bool:
        worst=0
        if len(nums)<2:
            return True
        for i in range(0,len(nums),1):
            if worst>2:
                return False
            if (nums[i]<nums[i-1]):
                worst+=1
            if i<len(nums)-1:
                temp=nums[i]
                nums[i]=nums[i+1]
                if nums==sorted(nums.copy()):
                    return True
                nums[i]=temp
            else:
                nums[i]=nums[i-1]
                if nums==sorted(nums.copy()):
                    return True
        return False
