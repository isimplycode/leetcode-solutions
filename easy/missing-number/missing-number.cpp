class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,theoreticalsum=0;
        for (int i=0; i<size(nums); ++i) {
            theoreticalsum+=i+1;
            sum+=nums[i];
        }
        return theoreticalsum-sum;
    }
};
