class Solution:
    def firstUniqChar(self, s: str) -> int:
        hash = {} 
        for i in s:
            if i in hash:
                hash[i] += 1
            else:
                hash[i] = 1
        for i in hash:
            if hash[i] == 1:
                return s.index(i)
        return -1
