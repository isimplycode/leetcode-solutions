class Solution {
public:
    vector<int> res;
    void dfs(Node* root) {
        if (root) {
            res.push_back(root->val);
            for (auto& i : root->children) {
                dfs(i);
            }
        }
    }
    vector<int> preorder(Node* root) {
        dfs(root);
        return res;
    }
};
