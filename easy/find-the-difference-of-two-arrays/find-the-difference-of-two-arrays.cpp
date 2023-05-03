class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> res(2);
        unordered_set<int> s1,s2;
        for (int i=0; i<size(nums1); ++i) {
            s1.insert(nums1[i]);
        }
        for (int i=0; i<size(nums2); ++i) {
            s2.insert(nums2[i]);
            if (s1.find(nums2[i])==s1.end()) {
                res[1].push_back(nums2[i]);
                s1.insert(nums2[i]);
            }
        }
        for (int i=0; i<size(nums1); ++i) {
            if (s2.find(nums1[i])==s2.end()) {
                res[0].push_back(nums1[i]);
                s2.insert(nums1[i]);
            }
        }
        return res;
    }
};
