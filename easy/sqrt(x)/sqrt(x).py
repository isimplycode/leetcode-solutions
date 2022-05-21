class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        left_bound = 0
        right_bound = x
        while left_bound <= right_bound:
            midpoint = (left_bound + right_bound) // 2
            if midpoint*midpoint == x:
                return midpoint
            if midpoint*midpoint < x and (midpoint+1) * (midpoint+1) > x:
                return midpoint
            if midpoint*midpoint < x:
                left_bound = midpoint + 1
            if midpoint*midpoint > x:
                right_bound = midpoint - 1
