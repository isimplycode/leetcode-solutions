#solved during contest
class Solution:
    def rearrangeCharacters(self, s: str, target: str) -> int:
        map = {}
        targetmap = {}
        if len(target) > len(s):
            return 0
        for i in s:
            if i in target:
                if i in map:
                    map[i] += 1
                else:
                    map[i] = 1
        if map == {}:
            return 0
        for i in target:
            if i in targetmap:
                targetmap[i] += 1
            else:
                targetmap[i] = 1
        min = float('inf')
        for i in targetmap:
            if i not in map:
                return 0
        for i in map:
            if targetmap[i] > map[i]:
                return 0
            if map[i]//targetmap[i] < min:
                min = map[i]//targetmap[i]
        return min
