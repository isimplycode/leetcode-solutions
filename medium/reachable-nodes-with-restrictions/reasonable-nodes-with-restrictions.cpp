class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        unordered_set<int> s;
        vector<vector<int>> adj(n);
        for (int i=0; i<size(edges); ++i) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        for (int i=0; i<size(restricted); ++i) {
            s.insert(restricted[i]);
        }
        int res=0;
        int vis[n];
        for (int i=0; i<n; ++i) {
            vis[i]=0;
        }
        queue<int> q;
        q.push(0);
        while (q.size()) {
            if (vis[q.front()]) {
                q.pop();
                continue;
            }
            res++;
            vis[q.front()]=1;
            for (auto i : adj[q.front()]) {
                if (s.find(i)==s.end()) q.push(i);
            }
            q.pop();
        }
        return res;
    }
};
