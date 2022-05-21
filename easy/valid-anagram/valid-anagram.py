class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        shash = {}
        thash = {}
        if len(s) != len(t):
            return False
        for i in range(0, len(s), 1):
            if s[i] in shash:
                shash[s[i]] += 1
            else: 
                shash[s[i]] = 1
            if t[i] in thash:
                thash[t[i]] += 1
            else:
                thash[t[i]] = 1
        return shash == thash
