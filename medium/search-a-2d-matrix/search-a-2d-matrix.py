class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        l = 0 
        r = len(matrix)-1
        while l <= r:
            m = l + (r - l) // 2
            if matrix[m][0] == target:
                return True
            if matrix[m][len(matrix[m])-1] == target:
                return True
            if matrix[m][0] < target and matrix[m][len(matrix[m])-1] > target:
                k = 0
                e = len(matrix[m])-1
                while k <= e:
                    n = k + (e - k) // 2
                    if matrix[m][k] == target:
                        return True
                    if matrix[m][e] == target:
                        return True
                    if matrix[m][n] == target:
                        return True
                    if matrix[m][n] > target:
                        e = n - 1
                    if matrix[m][n] < target:
                        k = n + 1
                return False
            if matrix[m][0] > target:
                r = m - 1
                continue
            if matrix[m][0] < target:
                l = m + 1
                continue
            return False
