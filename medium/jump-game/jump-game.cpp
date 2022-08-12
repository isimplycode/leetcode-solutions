class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxpossible=0;
        for (int i=0; i<size(nums); ++i) {
            if (maxpossible>=i) {
                maxpossible=max(maxpossible,i+nums[i]);
                if (maxpossible>=size(nums)-1) return true;
            } else return false;
        }
        return false;
    }
};
