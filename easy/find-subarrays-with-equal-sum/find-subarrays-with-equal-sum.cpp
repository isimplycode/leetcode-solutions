class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int prev=0;
        unordered_set<int> s;
        for (int i=1;i<size(nums); ++i) {
            prev=nums[i-1];
            if (s.find(prev+nums[i])!=s.end()) return true;
            s.insert(prev+nums[i]);
        }
        return false;
    }
};
