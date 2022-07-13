class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        res=[]
        def dfs(root,res):
            if root:
                dfs(root.left,res)
                res.append(root.val)
                dfs(root.right,res)
        dfs(root,res)
        return res[k-1]
