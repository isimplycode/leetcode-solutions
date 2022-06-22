class Solution {
public:
    vector<vector<int>> res;
    vector<int> subset;
    void gen(int n, vector<int> nums) {
        if (n==size(nums)) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[n]);
        gen(n+1,nums);
        subset.pop_back();
        gen(n+1,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        gen(0,nums);
        return res;
    }
};
