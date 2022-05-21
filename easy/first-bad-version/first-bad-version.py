class Solution(object):
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """

        l = 0 
        r = n 
        while l < r:
            m = (l + r) // 2
            if isBadVersion(m) == True:
                if isBadVersion(m-1) == False:
                    return m
                r = m-1
            if isBadVersion(m) == False:
                if isBadVersion(m+1) == True:
                    return m+1
                l = m+1
