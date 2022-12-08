class Solution {
public:
    vector<int> v1,v2;
    void dfs(TreeNode* node, vector<int> &v) {
        if (node) {
            if (!node->left&&!node->right) {
                v.push_back(node->val);
            }
            dfs(node->left, v);
            dfs(node->right, v);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs(root1,v1);
        dfs(root2,v2);
        return v1==v2;
    }
};
