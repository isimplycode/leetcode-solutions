class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        ans=[]
        l=0
        r=len(numbers)-1
        while l<r:
            if numbers[l]+numbers[r]==target:
                ans.append(l+1)
                ans.append(r+1)
                break
            elif numbers[r]+numbers[l]>target:
                r-=1
            else:
                l+=1
        return ans
