class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        def bfs(tree, resultant, depth):
            if tree != None:
                if len(resultant) <= depth:
                    resultant.append([])
                resultant[depth].append(tree.val)
                bfs(tree.left, resultant, depth+1)
                bfs(tree.right, resultant, depth+1)
            if tree == None:
                if len(resultant) <= depth:
                    resultant.append([])
                resultant[depth].append("hi")
        result = []
        bfs(root, result, 0)
        for i in result:
            if i != i[::-1]:
                return False
        return Tru
