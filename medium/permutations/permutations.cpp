class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<vector<int>> res;
        do {
            res.push_back(nums);
        } while (next_permutation(begin(nums),end(nums)));
        return res;
    }
};
