class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> res(size(nums));
        for (int i=0; i<size(nums); ++i)
            res[i]=nums[nums[i]];
        return res;
    }
};
