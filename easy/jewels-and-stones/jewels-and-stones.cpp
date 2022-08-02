class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> s;
        for (int i=0; i<size(jewels); ++i) {
            s.insert(jewels[i]);
        }
        int res=0;
        for (int i=0; i<size(stones); ++i) {
            if (s.find(stones[i])!=s.end()) {
                res++;
            }
        }
        return res;
    }
};
