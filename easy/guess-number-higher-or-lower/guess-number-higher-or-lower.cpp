
class Solution {
public:
    int guessNumber(int n) {
        int l = 1;
        int r = n;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (guess(m) == 0) {
                return m;
            }
            if (guess(m) == 1) {
                l = m + 1;
            }
            if (guess(m) == -1) {
                r = m - 1;
            }
        }
        return 0;
    }
};
