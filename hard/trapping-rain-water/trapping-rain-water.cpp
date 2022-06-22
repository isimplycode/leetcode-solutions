class Solution {
public:
    int trap(vector<int>& height) {
        int lft[size(height)], rt[size(height)];
        int a=0;
        for (int i=0; i<size(height); ++i) {
            lft[i]=a;
            a=max(a,height[i]);
        }
        a=0;
        for (int i=size(height)-1; i>=0; --i) {
            rt[i]=a;
            a=max(a,height[i]);
        }
        int amt,res=0;
        for (int i=0; i<size(height); ++i) {
            amt=min(lft[i],rt[i])-height[i];
            if (amt>0)
                res+=amt;
        }
        return res;
    }
};
