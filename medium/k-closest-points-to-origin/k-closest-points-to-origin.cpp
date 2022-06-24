class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multiset<pair<int,int>> q;
        for (int i=0; i<size(points); ++i) {
            q.insert({pow(abs(points[i][0]),2)+pow(abs(points[i][1]),2),i});
        }
        vector<vector<int>> res;
        auto it=begin(q);
        for (int i=0; i<k; ++i) {
            res.push_back(points[it->second]); it++;
        }
        return res;
    }
};
