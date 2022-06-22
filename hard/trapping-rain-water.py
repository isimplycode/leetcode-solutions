class Solution:
    def trap(self, height: List[int]) -> int:
        leftmax=[]
        rightmax=[0]*len(height)
        msf=0
        for i in height:
            leftmax.append(msf)
            msf=max(msf,i)
        msf=0
        for i in range(len(height)-1,-1,-1):
            rightmax[i]=msf
            msf=max(msf,height[i])
        res=0
        for i in range(0,len(height),1):
            amt=min(leftmax[i],rightmax[i])-height[i]
            if amt>-1:
                res+=amt
        return res
