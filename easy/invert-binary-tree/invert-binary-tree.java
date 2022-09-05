class Solution {
    protected void dfs(TreeNode root) {
        if (root!=null) {
            TreeNode temp=root.left;
            root.left=root.right;
            root.right=temp;
            dfs(root.left);
            dfs(root.right);
        }
    }
    public TreeNode invertTree(TreeNode root) {
        dfs(root);
        return root;
    }
}
