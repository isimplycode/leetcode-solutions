#solved in contest
class Solution:
    def digitCount(self, num: str) -> bool:
        hashmap = {}
        for i in num:
            if i in hashmap:
                hashmap[i] += 1
            else:
                hashmap[i] = 1
        if len(num) == 1:
            return False
        for i in range(0, len(num)-1, 1):
            if str(i) not in hashmap and num[i] == "0":
                continue
            elif str(i) not in hashmap and num[i] != "0":
                return False
            elif hashmap[str(i)] != int(num[i]):
                return False
        return True
