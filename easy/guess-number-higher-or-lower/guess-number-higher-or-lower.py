class Solution(object):
    def guessNumber(self, n):
        """
        :type n: int
        :rtype: int
        """

        l = 1
        r = n
        while l <= r:
            m = (l + r) // 2
            if guess(m) == 0:
                return m
            if guess(m) == -1:
                r = m - 1
            if guess(m) == 1:
                l = m + 1
