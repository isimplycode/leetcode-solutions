class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        set<pair<int, int>> s;
        unordered_map<int, int> m;
        for (int i=0; i<nums.size(); ++i) {
            if (m.count(nums[i])) {
                m[nums[i]] += 1;
            } else {
                m[nums[i]] = 1;
            }
        }
        for (auto v : m) {
            s.insert(make_pair(v.second,v.first));
        }
        auto it = s.end();
        vector<int> res;
        for (int i=0; i<k; i++) {
            res.push_back((--it)->second);
        }
        return res;
    }
};
