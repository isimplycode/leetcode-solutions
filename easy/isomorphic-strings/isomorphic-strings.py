class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        prevs=-1
        prevt=-1
        hashs={}
        hasht={}
        for i in s:
            if i in hashs:
                hashs[i]+=1
            else:
                hashs[i]=1
        for i in t:
            if i in hasht:
                hasht[i]+=1
            else:
                hasht[i]=1
        r=[]
        for i in hashs:
            r.append(hashs[i])
        count=0
        for i in hasht:
            if hasht[i]!=r[count]:
                return False
            count+=1
        
        for i in range(0, len(s), 1):
            news=False
            newt=False
            if s[i]!=prevs:
                news=True
            else:
                news=False
            if t[i]!=prevt:
                newt=True
            else:
                newt=False
            if news!=newt:
                return False
            prevs=s[i]
            prevt=t[i]
        return True
