class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        deque<pair<int,int>> d;
        vector<int> res(size(temperatures));
        for (int i=0; i<size(temperatures);++i) {
            if (d.empty()) d.push_back({temperatures[i],i});
            if (temperatures[i]>d.back().first) {
                while (temperatures[i]>d.back().first) {
                    int idx=d.back().second;
                    d.pop_back();
                    res[idx]=i-idx;
                    if (d.empty()) {
                        break;
                    }
                }
            }
            d.push_back({temperatures[i],i});
        }
        return res;
    }
};
