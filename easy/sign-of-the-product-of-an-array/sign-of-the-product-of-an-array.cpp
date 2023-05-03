class Solution {
public:
    int arraySign(vector<int>& nums) {
        int res=1;
        for (int i=0; i<size(nums); ++i) {
            if (nums[i]==0) return 0;
            else if (nums[i]<0) res=res==1?-1:1;
            else res=res==1?1:-1;
        }
        return res;
    }
};
