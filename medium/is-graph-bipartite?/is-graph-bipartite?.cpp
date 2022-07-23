class Solution {
public:
    unordered_map<int,int> m;
    int vis[100];
    bool res=true;
    bool isBipartite(vector<vector<int>>& graph) {
        for (int i=0; i<size(graph); ++i) {
            vis[i]=0;
        }
        queue<pair<int,int>> q;
        int node,color;
        for (int i=0; i<size(graph); ++i) {
            if (!vis[i]) {
                q.push({i,1});
                while (size(q)) {
                    node=q.front().first;
                    color=q.front().second;
                    q.pop();
                    if (vis[node]) {
                        if (m[node]!=color) return false;
                        continue;
                    }
                    vis[node]=1;
                    m[node]=color;
                    for (auto i : graph[node]) {
                        q.push({i,-color});
                    } 
                }

            }
        }
        return true;
    }
};
