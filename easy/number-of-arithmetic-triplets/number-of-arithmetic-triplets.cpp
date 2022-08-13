class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int res=0;
        for (int i=0; i<size(nums); ++i) {
            for (int j=i+1; j<size(nums); ++j) {
                for (int k=j+1; k<size(nums); ++k) {
                    if (nums[j]-nums[i]==diff&nums[k]-nums[j]==diff) {
                        res++;
                    }
                }
            }
        }
        return res;
    }
};
