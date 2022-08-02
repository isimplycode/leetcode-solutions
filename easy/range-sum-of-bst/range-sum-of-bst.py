class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        res=[]
        def dfs(node,res):
            if node:
                if (node.val>=low and node.val<=high):
                    res.append(node.val)
                dfs(node.left,res)
                dfs(node.right,res)
        dfs(root,res)
        return sum(res)
