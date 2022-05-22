class Solution:            
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def dfspreorder(tree, resultant):
            if tree != None:
                resultant.append(tree.val)

                dfspreorder(tree.left, resultant)
                dfspreorder(tree.right, resultant)
        arr = []
        dfspreorder(root,arr)
        
        return arr