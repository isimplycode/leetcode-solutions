class Solution {
public:
    set<int> s;
    unordered_map<int,priority_queue<pair<int,int>>> m;
    void dfs(TreeNode* root,int idx,int level) {
        if (!root) return;
        s.insert(idx);
        m[idx].push({-level,-root->val});
        dfs(root->left,idx-1,level+1);
        dfs(root->right,idx+1,level+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root,0,0);
        vector<vector<int>> res;
        for (auto& i : s) {
            res.push_back({});
            while (m[i].size()) {
                res[size(res)-1].push_back(-m[i].top().second);
                m[i].pop();
            }
        }
        return res;
    }
};
