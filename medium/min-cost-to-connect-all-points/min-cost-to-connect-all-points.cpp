class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int res=0;
        int vis[size(points)];
        vector<vector<pair<int,int>>> adj(size(points));
        for (int i=0; i<size(points); ++i) {
            for (int j=i+1; j<size(points); ++j) {
                int w=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                adj[i].push_back({w,j});
                adj[j].push_back({wi});
            }
            vis[i]=0;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        int count=0;
        while (pq.size()&&count<size(points)) {
            int w=pq.top().first,node=pq.top().second;
            if (vis[node]) {
                pq.pop();
                continue;
            }
            pq.pop();
            res+=w;
            vis[node]=1;
            count++;
            for (int i=0; i<size(adj[node]); ++i) {
                if (!vis[adj[node][i].second]) {
                    pq.push({adj[node][i].first,adj[node][i].second});
                }
            }
        }
        return res;
    }
};
