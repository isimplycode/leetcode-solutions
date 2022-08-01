class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=0;
        for (int i=0; i<size(accounts); ++i) {
            int temp=0;
            for (int j=0; j<size(accounts[i]); ++j) {
                temp+=accounts[i][j];
            }
            res=max(res,temp);
        }
        return res;
    }
};
