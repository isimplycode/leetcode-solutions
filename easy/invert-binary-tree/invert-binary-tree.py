class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        def dfsinvert(tree):
            if tree != None:
                [tree.right, tree.left] = [tree.left, tree.right]
                dfsinvert(tree.left)
                dfsinvert(tree.right)
        
        dfsinvert(root)
        return root
