class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (int i=size(matrix[0])-1; i>=0; --i) {
            int rowrep=matrix[0][i];
            int prev=i+1;
            for (int j=1; j<size(matrix); ++j) {
                if (prev>=size(matrix[0])) {
                    break;
                }
                if (matrix[j][prev]!=rowrep) return false;
                prev++;
            }
        }
        for (int i=1; i<size(matrix); ++i) {
            int rowrep=matrix[i][0];
            int x=i+1;
            for (int j=1; j<size(matrix[0]); ++j) {
                if (x>=size(matrix)) {
                    break;
                }
                if (matrix[x][j]!=rowrep) return false;
                x++;
            }
        }
        return true;
    }
};
