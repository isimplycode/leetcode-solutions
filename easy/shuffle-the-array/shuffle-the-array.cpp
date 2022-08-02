class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(n*2); 
        for (int i=0; i<n; ++i) {
            res[i*2]=nums[i];
            res[i*2+1]=nums[i+n];
        }
        return res;
    }
};
