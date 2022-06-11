class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (auto& i : nums) {
            s.insert(i);
        }
        int maximum = 0;
        for (auto& i : s) {
            int curr = 1;
            if (s.count(i-1) == 0) {
                int num = i;
                while(s.count(num+1) == 1) {
                    curr ++;
                    num = num+1;
                }
            }
            maximum = max(maximum, curr);
        }
        return maximum;
    }
};
