def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
    def dfs(tree, asum):
        if tree != None:
            asum += tree.val
            if tree.right or tree.left:
                return dfs(tree.left, asum) or dfs(tree.right, asum)
            if asum == targetSum and tree.left == None and tree.right == None:
                return True
            
    return dfs(root, 0)