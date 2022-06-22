class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        res=[]
        def dfs(node):
            if node:
                res.append(node.val)
                for i in node.children:
                    dfs(i)
        dfs(root)
        return res
