class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        def bfs(tree, resultant, level):
            if tree != None:
                if len(resultant) <= level:
                    resultant.append([])
                resultant[level] = tree.val
                bfs(tree.left, resultant, level+1)
                bfs(tree.right, resultant, level+1)
        result = []
        bfs(root, result, 0)
        return len(result)
