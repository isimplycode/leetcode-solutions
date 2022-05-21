class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, string> map;
        for (int i = 0; i < nums.size(); i++) {
            if (map.find(nums[i]) != map.end()) {
                return true;
            } else {
                map[nums[i]] = "I exist.";
            }   
        }
        return false;
    }
};
