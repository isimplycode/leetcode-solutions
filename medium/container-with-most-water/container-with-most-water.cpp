class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=size(height)-1;
        int res=0;
        while (l<r) {
            res=max(res,min(height[r],height[l])*(r-l));
            if (height[l]<height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return res;
    }
};
