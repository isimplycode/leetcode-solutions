class Solution {
public:
    int rob(vector<int>& nums) {
        if(size(nums)==1) return nums[0];
        if(size(nums)==2) return max(nums[0],nums[1]);
        int dp1[size(nums)-1];
        int dp2[size(nums)-1];
        for (int i=0; i<size(nums)-1; ++i) {
            dp1[i]=0;
            dp2[i]=0;
        }
        dp1[0]=nums[0];
        dp2[0]=nums[1];
        for (int i=1; i<size(nums)-1; ++i) {
            if (i>1)
                dp1[i]=max(dp1[i],dp1[i-2]);
            if (i>2)
                dp1[i]=max(dp1[i],dp1[i-3]);
            dp1[i]+=nums[i];
        }
        for (int i=1; i<size(nums)-1; ++i) {
            if (i>1)
                dp2[i]=max(dp2[i],dp2[i-2]);
            if (i>2)
                dp2[i]=max(dp2[i],dp2[i-3]);
            dp2[i]+=nums[i+1];
        }
        return max(max(dp2[size(nums)-2],dp2[size(nums)-3]),max(dp1[size(nums)-2],dp1[size(nums)-3]));
    }
};
