class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for (int i=0; i<size(nums); ++i) {
            sum+=nums[i];
        }
        if (sum%2)
            return false;
        unordered_set<int> dp;
        dp.insert(0);
        for (int i=0; i<size(nums); ++i) {
            unordered_set<int> intdp;
            for (auto j : dp) {
                if (j+nums[i]==sum/2)
                    return true;
                intdp.insert(j);
                intdp.insert(j+nums[i]);
            }
            dp=intdp;
        }
        return false;
    }
};
