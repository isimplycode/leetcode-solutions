class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for (int i=size(mat[0])-1; i>=0; --i) {
            int j=0,k=i;
            vector<int> temp;
            temp.push_back(mat[j][k]);
            while (j<size(mat)-1&&k<size(mat[0])-1) {
                j++;
                k++;
                temp.push_back(mat[j][k]);
            }
            sort(begin(temp),end(temp));
            j=0;
            k=i;
            int counter=0;
            mat[j][k]=temp[counter];
            while (j<size(mat)-1&&k<size(mat[0])-1) {
                j++;
                k++;
                counter++;
                mat[j][k]=temp[counter];
            }
        }
        for (int i=1; i<size(mat); ++i) {
            int j=i,k=0;
            vector<int> temp;
            temp.push_back(mat[j][k]);
            while (j<size(mat)-1&&k<size(mat[0])-1) {
                j++;
                k++;
                temp.push_back(mat[j][k]);
            }
            sort(begin(temp),end(temp));
            j=i;
            k=0;
            int counter=0;
            mat[j][k]=temp[counter];
            while (j<size(mat)-1&&k<size(mat[0])-1) {
                j++;
                k++;
                counter++;
                mat[j][k]=temp[counter];
            }
        }
        return mat;
    }
};
