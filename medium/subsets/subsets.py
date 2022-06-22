class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res=[]
        subset=[]
        def gen(i):
            if i==len(nums):
                res.append(subset.copy())
                return
            subset.append(nums[i])
            gen(i+1)
            subset.pop()
            gen(i+1)
        gen(0)
        return res
