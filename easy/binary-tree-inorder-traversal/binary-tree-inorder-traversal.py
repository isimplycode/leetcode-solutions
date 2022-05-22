class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def dfsinorder(tree, resultant):
            if tree != None:
                dfsinorder(tree.left, resultant)
                resultant.append(tree.val)
                dfsinorder(tree.right, resultant)
        result = []
        dfsinorder(root, result)
        return result