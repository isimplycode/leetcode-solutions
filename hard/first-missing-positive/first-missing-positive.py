class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        hashmap = {}
        minimum = 10e9
        for i in nums:
            if i > 0:
                hashmap[i] = i+1
        if 1 not in hashmap:
            return 1
        for i in hashmap:
            if i-1 not in hashmap:
                j = i
                while hashmap[j] in hashmap:
                    j = hashmap[j]
                if hashmap[j] < minimum:
                    minimum = hashmap[j]
        return minimum
