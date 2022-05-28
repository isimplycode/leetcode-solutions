class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = 0
        r = 1
        max = 0
        while r <= len(prices)-1:
            if prices[l] > prices[r]:
                l += 1
                r = l+1
            else:
                if prices[r] - prices[l] > max:
                    max = prices[r] - prices[l]
                r = r + 1
        return max
