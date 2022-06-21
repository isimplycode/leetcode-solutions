class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(size(nums),1);
        int sum=1;
        for (int i=0; i<size(nums); ++i) {
            res[i]*=sum;
            sum*=nums[i];
        }
        sum=1;
        for (int i=size(nums)-1; i>-1; --i) {
            res[i]*=sum;
            sum*=nums[i];
        }
        return res;
    }
};
