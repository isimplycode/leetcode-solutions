class Solution {
    public int maxArea(int[] height) {
        int l=0,r=height.length-1;
        int res=0;
        while (l<r) {
            res=Integer.max(res,Integer.min(height[l],height[r])*(r-l));
            if (height[r]<height[l]) {
                r--;
            } else {
                l++;
            }
        }
        return res;
    }
}
