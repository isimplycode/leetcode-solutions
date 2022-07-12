class Solution {
public:
    int rob(vector<int>& nums) {
        if (size(nums)==1) return nums[0];
        int dp[size(nums)];
        dp[0]=nums[0];
        for (int i=1; i<size(nums); ++i) {
            dp[i]=0;
        }
        for (int i=1; i<size(nums); ++i) {
            if (i>1) 
                dp[i]=max(dp[i],dp[i-2]);
            if (i>2)
                dp[i]=max(dp[i],dp[i-3]);
            dp[i]+=nums[i];
        }
        return max(dp[size(nums)-1],dp[size(nums)-2]);
    }
};
