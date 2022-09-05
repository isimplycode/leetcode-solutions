class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (!root) return {};
        vector<vector<int>> res;
        queue<Node*> q;
        q.push(root);
        while (q.size()) {
            int tmp=q.size();
            res.push_back({});
            for (int i=0; i<tmp; ++i) {
                res[size(res)-1].push_back(q.front()->val);
                for (auto& j : q.front()->children) {
                    q.push(j);
                }
                q.pop();
            }
        }
        return res;
    }
};
