class Solution {
public:
    void dfs(int &res,int mx,TreeNode* node) {
        if (node) {
            if (node->val>=mx) res++;
            mx=max(mx,node->val);
            dfs(res,mx,node->left);
            dfs(res,mx,node->right);
        }
        return;
    }
    
    int goodNodes(TreeNode* root) {
        int res=0;
        dfs(res,-1e5,root);
        return res;
    }
};
