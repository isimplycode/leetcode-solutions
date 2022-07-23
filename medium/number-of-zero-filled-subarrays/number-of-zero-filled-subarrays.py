import operator as op
from functools import reduce
def ncr(n, r):
    if (n==0 or n==1): return 0 
    r = min(r,n-r)
    numer=reduce(op.mul,range(n,n-r,-1),1)
    denom=reduce(op.mul,range(1,r+1),1)
    return numer // denom
class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        length=0
        res=0
        for i in nums:
            if i==0:
                length+=1
            else:
                if length:
                    res+=ncr(length,2)+length
                length=0
        if length:
            res+=ncr(length,2)+length
        return res
