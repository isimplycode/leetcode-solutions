class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> w;
        int maximum = 0;
        int currlen = 0;
        int lft = 0, rt = 0;
        while (rt != s.size()) {
            if (w.count(s[rt]) == 0) {
                w.insert(s[rt]);
                rt++;
                currlen = rt-lft;
                maximum = max(maximum, currlen);
            } else {
                w.erase(s[lft]);
                lft++;
            }
        }
        return maximum;
    }
};
