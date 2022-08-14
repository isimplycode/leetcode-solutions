class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> res;
        vector<int> maxes;
        for (int i=1; i<size(grid)-1; i++) {
            for (int j=1; j<size(grid)-1; ++j) {
                int mx=0;
                for (int k=i-1; k<i+2; ++k) {
                    for (int l=j-1; l<j+2; ++l) {
                        mx=max(mx,grid[k][l]);
                    }
                }
                maxes.push_back(mx);
            }
        }
        int count=0;
        for (int i=0; i<size(maxes); ++i) {
            if (count%(size(grid)-2)==0) {
                res.push_back({});
            }
            count++;
            res[size(res)-1].push_back(maxes[i]);
        }
        return res;
    }
};
