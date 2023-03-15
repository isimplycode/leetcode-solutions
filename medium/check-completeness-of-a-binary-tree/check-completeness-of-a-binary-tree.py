class Solution:
    def isCompleteTree(self, root: Optional[TreeNode]) -> bool:
        arr = []
        def bfs(root,arr,level):
            if (len(arr)<level):
                arr.append([])
            if root:
                arr[level-1].append(root.val)
                bfs(root.left,arr,level+1)
                bfs(root.right,arr,level+1)
            else:
                arr[level-1].append("")
        bfs(root,arr,1)
        arr = arr[0:-1]
        last=.5
        for i in arr:
            if len(i)!=last*2:
                return False
            last *= 2
            seen = False
            for j in i:
                if j=="":
                    seen=True
                else:
                    if seen:
                        return False
        return True
