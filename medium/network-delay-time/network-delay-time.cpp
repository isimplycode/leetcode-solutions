class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        k--;
        int distance[n];
        for (int i=0; i<n; ++i) {
            distance[i]=INT_MAX;
        }
        unordered_map<int,vector<pair<int,int>>> m;
        for (int i=0; i<size(times); ++i) {
            times[i][0]--;
            times[i][1]--;
            m[times[i][0]].push_back({times[i][2],times[i][1]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        distance[k]=0;
        pq.push({0,k});
        while (pq.size()) {
            int w=pq.top().first,node=pq.top().second;
            pq.pop();
            for (int i=0; i<size(m[node]); ++i) {
                if (w+m[node][i].first<distance[m[node][i].second]) {
                    distance[m[node][i].second]=w+m[node][i].first;
                    pq.push({distance[m[node][i].second],m[node][i].second});
                }
            }
        }
        int res=0;
        for (int i=0; i<n; ++i) {
            res=max(res,distance[i]);
        }
        return (res==INT_MAX) ? -1 : res;
    }
};
