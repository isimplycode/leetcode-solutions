class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        res=[]
        def dfs(tree):
            if tree:
                dfs(tree.left)
                res.append(tree.val)
                dfs(tree.right)
        dfs(root)
        hash={}
        for i in res:
            if i in hash:
                return False
            hash[i]=0
        return res==sorted(res.copy())
