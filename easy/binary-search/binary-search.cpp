class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();
        if (nums.size() == 1) {
            if (nums[0] == target) {
                return 0;
            }
            return -1;
        }
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (nums[m] == target) {
                return m;
            }
            if (nums[m] > target) {
                r = m-1;
            }
            if (nums[m] < target) {
                l = m+1;
            }
        }
        return -1;
    }
};
