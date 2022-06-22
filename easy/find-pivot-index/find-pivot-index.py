class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        for i in range(1,len(nums),1):
            nums[i]+=nums[i-1]
        for i in range(0, len(nums),1):
            if i!=0 and i!=len(nums)-1:
                if nums[i-1]==nums[len(nums)-1]-nums[i]:
                    return i
            elif i==0:
                if nums[len(nums)-1]-nums[0]==0:
                    return 0
            elif i==len(nums)-1:
                if nums[len(nums)-2]==0:
                    return len(nums)-1
        return -1
