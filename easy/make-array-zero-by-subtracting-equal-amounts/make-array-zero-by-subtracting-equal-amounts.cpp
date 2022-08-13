class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int total=0;
        for (int i=0; i<size(nums); ++i) {
            total+=nums[i];
        }
        int count=0;
        while (total>0) {
            int mnn=INT_MAX;
            for (int i=0; i<size(nums); ++i) {
                if (nums[i]>0)
                    mnn=min(mnn,nums[i]);
            }
            for (int i=0; i<size(nums); ++i) {
                if (nums[i]>0) {
                    nums[i]-=mnn;
                    total-=mnn;
                }
            }
            count++;
        }
        return count;
    }
};
