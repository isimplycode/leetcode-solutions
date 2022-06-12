class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<unsigned int, unsigned int> map;
        for (auto& i : nums) {
            if (i > 0) {
                map[i] = (unsigned int)i+1;
            }
        }
        if (map.find(1) == map.end()) {
            return 1;
        }
        int minimum = INT_MAX;
        for (auto& i : map) {
            if (map.find(i.first-1) == map.end()) {
                int j = i.first;
                while (map.find(map[j]) != map.end()) {
                    j = map[j];
                }
                if (map[j] < minimum){
                    minimum = map[j];
                }
            } 
        }
        return minimum;
    }
};
