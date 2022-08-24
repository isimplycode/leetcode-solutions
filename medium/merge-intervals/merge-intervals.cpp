class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(begin(intervals),end(intervals));
        vector<vector<int>> res;
        int i=0;
        while (i<size(intervals)-1) {
            if (intervals[i][1]>=intervals[i+1][0]) {
                intervals[i+1][1]=max(intervals[i][1],intervals[i+1][1]);
                intervals[i+1][0]=intervals[i][0];
            } else res.push_back(intervals[i]);
            ++i;
        }
        res.push_back(intervals[i]);
        return res;
    }
};
