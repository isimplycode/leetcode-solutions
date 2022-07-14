class Solution {
public:
    bool isVal(long long k, int h, vector<int> piles) {
        if (!k) return true;
        for (int i=0; i<size(piles); ++i) {
            h-=(piles[i]+k-1)/k;
            }
        return h>=0;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l=0,r=10e9;
        while (l<r) {
            long long m=(r+l)/2;
            bool val=isVal(m,h,piles);
            if (val) {
                if (m==1) return 1;
                if (!isVal(m-1,h,piles)) {
                    return m;
                } else {
                    r=m;
                }
            } else {
                l=m;
            }
        }
        return -1;
    }
};
