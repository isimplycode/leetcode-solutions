class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        def dfs(tree, good, max):
            if tree:
                if tree.val >= max:
                    good.append("")
                    max = tree.val
                dfs(tree.left, good, max)
                dfs(tree.right, good, max)
        res = []
        dfs(root, res, -9e5)
        return len(res)