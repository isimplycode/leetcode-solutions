class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> x,y;
        for (int i=0; i<size(matrix); ++i) {
            for (int j=0; j<size(matrix[0]); ++j) {
                if (matrix[i][j]==0) {
                    y.insert(i);
                    x.insert(j);
                }
            }
        }
        for (int i=0; i<size(matrix); ++i) {
            for (int j=0; j<size(matrix[0]); ++j) {
                if (x.find(j)!=x.end()||y.find(i)!=y.end()) {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
