class Solution {
    protected boolean dfs(TreeNode p, TreeNode q) {
        if (p==null&&q==null) {
            return true;
        } else if (p!=null&&q!=null) {
            if (p.val==q.val) {
                return (dfs(p.left,q.left)&&dfs(p.right,q.right));
            } 
            return false;
        } else {
            return false;
        }
    }
    public boolean isSameTree(TreeNode p, TreeNode q) {
        return dfs(p,q);
    }
}
