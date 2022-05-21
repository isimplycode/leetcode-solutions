class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int t = 0;
        int b = matrix.size()-1;
        while (t <= b) {
            int m = t + (b-t) / 2;
            if (matrix[m][0] == target) {
                return true;
            }
            if (matrix[m][matrix[m].size()-1] == target) {
                return true;
            }
            if (matrix[m][0] < target && matrix[m][matrix[m].size()-1] > target) {
                int l = 0;
                int r = matrix[m].size();
                while (l <= r) {
                    int n = l + (r-l) / 2;
                    if (matrix[m][n] == target) {
                        return true;
                    }
                    if (matrix[m][n] > target) {
                        r = n - 1;
                    }
                    if (matrix[m][n] < target) {
                        l = n + 1;
                    }
                }
                return false;
            }
            if (matrix[m][0] < target && matrix[m][matrix[m].size()-1] < target) {
                t = m + 1;
            }
            if (matrix[m][0] > target && matrix[m][matrix[m].size()-1] > target) {
                b = m - 1;
            }
        }
        return false;
    }
};
