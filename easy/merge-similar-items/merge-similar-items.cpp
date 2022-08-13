class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> res;
        unordered_map<int,int> m;
        for (int i=0; i<size(items1); ++i) {
            if (m.find(items1[i][0])==m.end()) {
                m[items1[i][0]]=items1[i][1];
            } else {
                m[items1[i][0]]+=items1[i][1];
            }
        }
        for (int i=0; i<size(items2); ++i) {
            if (m.find(items2[i][0])==m.end()) {
                m[items2[i][0]]=items2[i][1];
            } else {
                m[items2[i][0]]+=items2[i][1];
            }
        }
        for (auto i : m) {
            res.push_back({i.first,i.second});
        }
        sort(res.begin(),res.end());
        return res;
    }
};
