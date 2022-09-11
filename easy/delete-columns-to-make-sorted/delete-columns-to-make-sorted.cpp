class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int res=0;
        for (int i=0; i<size(strs[0]); ++i) {
            for (int j=1; j<size(strs); ++j) {
                if (strs[j][i]<strs[j-1][i]) {
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};
