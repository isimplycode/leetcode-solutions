class Solution {
public:
    vector<int> res;
    void dfs(TreeNode* node) {
        if (node) {
            dfs(node->left);
            res.push_back(node->val);
            dfs(node->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        dfs(root);
        return res;
    }
};
