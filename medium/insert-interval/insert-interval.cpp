class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.insert(begin(intervals),{-1,-1});
        vector<vector<int>> res;
        bool started=false,ended=false;
        int startval=-1;
        for (int i=1; i<size(intervals); ++i) {
            if (!started) {
                if (intervals[i][0]>newInterval[1]&&intervals[i-1][1]<newInterval[0]) {
                    started=true;
                    ended=true;
                    res.push_back(newInterval);
                    res.push_back(intervals[i]);
                    
                }
                if (intervals[i][1]>=newInterval[0]) {
                    started=true;
                    startval=min(newInterval[0],intervals[i][0]);
                } else res.push_back(intervals[i]);
            } else if (started&&!ended) {
                if (intervals[i][0]>newInterval[1]) {
                    ended=true;
                    res.push_back({startval,max(intervals[i-1][1],newInterval[1])});
                    res.push_back(intervals[i]);
                } else if (intervals[i][0]==newInterval[1]) {
                    ended=true;
                    res.push_back({startval,intervals[i][1]});
                } else {
                    if (intervals[i][1]>=newInterval[1]) {
                        ended=true;
                        res.push_back({startval,intervals[i][1]});
                    }
                }
            } else res.push_back(intervals[i]);
        }
        if (!started) {
            res.push_back(newInterval);
        }
        if (!ended&&started) {
            res.push_back({startval,max(intervals[size(intervals)-1][1],newInterval[1])});
        }
        return res;
    }
};
