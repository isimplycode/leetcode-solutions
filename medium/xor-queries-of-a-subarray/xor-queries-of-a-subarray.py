class Solution:
    def xorQueries(self, arr: List[int], queries: List[List[int]]) -> List[int]:
        x = 0
        prefixquery = []
        for i in arr:
            x ^= i
            prefixquery.append(x)
        answer = []
        for i in queries:
            y = prefixquery[i[1]]
            if i[0] == 0:
                answer.append(y)
            else:
                y ^= prefixquery[i[0]-1]
                answer.append(y)
        return answer
