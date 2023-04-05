class Solution {
public:

    struct DSU {
        vector<int> e=vector<int>(1001,-1);

        DSU() {
            return; 
        }

        int get(int x) {
            return e[x]<0?x:e[x]=get(e[x]);
        }

        bool unite(int a,int b) {
            a=get(a);
            b=get(b);
            if (a==b) {
                return false;
            }
            if (e[a]<e[b]) {
                swap(a,b);
            }
            e[a]+=e[b];
            e[b]=a;
            return true;
        }
    };

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> res={-1,-1};
        DSU dsu;
        for (int i=0; i<size(edges); ++i) {
            if(!dsu.unite(edges[i][0],edges[i][1])) {
                res={edges[i][0],edges[i][1]};
            }
        }
        return res;
    }
};
