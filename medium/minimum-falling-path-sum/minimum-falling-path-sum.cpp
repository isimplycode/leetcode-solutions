class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int res=INT_MAX;
        for (int i=1; i<size(matrix); ++i) {
            for (int j=0; j<size(matrix); ++j) {
                if (j==0) {
                    matrix[i][j]=min(matrix[i-1][j],matrix[i-1][j+1])+matrix[i][j];
                } else if (j==size(matrix)-1) {
                    matrix[i][j]=min(matrix[i-1][j],matrix[i-1][j-1])+matrix[i][j];
                } else {
                matrix[i][j]=min(min(matrix[i-1][j],matrix[i-1][j-1]),matrix[i-1][j+1])+matrix[i][j];
                }
                if (i==size(matrix)-1) {
                    res=min(res,matrix[i][j]);
                }
            }
        }
        if (res==INT_MAX) res=matrix[0][0];
        return res;
    }
};
