class Solution:
    def countAsterisks(self, s: str) -> int:
        news=""
        onpipe=False
        for i in s:
            if i=="|":
                if onpipe==False:
                    onpipe=True
                else:
                    onpipe=False
            if onpipe==False and i!="|":
                news+=i
        astcount=0
        for i in news:
            if i=="*":
                astcount+=1
        return astcount
