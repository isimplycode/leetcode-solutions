class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res=0;
        for (int i=0; i<size(nums); ++i) {
            for (int j=i+1; j<size(nums); ++j) {
                if (nums[i]==nums[j]) res++;
            }
        }
        return res;
    }
};
