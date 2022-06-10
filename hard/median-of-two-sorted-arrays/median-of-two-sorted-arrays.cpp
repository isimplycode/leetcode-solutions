class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0; i<nums2.size(); ++i) {
            nums1.push_back(nums2[i]);
        }
        sort(begin(nums1), end(nums1));
        if (nums1.size()%2 != 0) {
            return nums1[nums1.size()/2];
        } else {
            if (nums1[nums1.size()/2] == 0) {
                return 0;
            }
            return ((double)nums1[nums1.size()/2]+(double)nums1[(nums1.size()/2)-1])/2;
        }
    }
};
