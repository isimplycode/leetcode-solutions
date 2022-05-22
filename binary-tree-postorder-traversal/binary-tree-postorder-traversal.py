class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def dfspostorder(tree, resultant):
            if tree != None:
                dfspostorder(tree.left, resultant)
                dfspostorder(tree.right,resultant)
                resultant.append(tree.val)
        results = []
        dfspostorder(root, results)
        return results
