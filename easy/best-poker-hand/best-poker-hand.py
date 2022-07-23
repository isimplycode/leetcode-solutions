class Solution:
    def bestHand(self, ranks: List[int], suits: List[str]) -> str:
        flush=True
        for i in range(1,len(suits),1):
            if suits[i]!=suits[i-1]:
                flush=False
        if flush:
            return "Flush"
        hashh={}
        for i in ranks:
            if i in hashh:
                hashh[i]+=1
            else:
                hashh[i]=1
        seentwo=False
        for i in hashh:
            if hashh[i]>=3:
                return "Three of a Kind"
            if hashh[i]==2:
                seentwo=True
        if seentwo:
            return "Pair"
        return "High Card"
