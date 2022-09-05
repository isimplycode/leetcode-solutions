class Solution {
    int res=0;
    protected void dfs(TreeNode root, int level) {
        if (root!=null) {
            res=Integer.max(res,level);
            dfs(root.left,level+1);
            dfs(root.right,level+1);
        }
    }
    public int maxDepth(TreeNode root) {
        dfs(root,1);
        return res;
    }
}
