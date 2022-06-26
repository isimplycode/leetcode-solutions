class Solution:
    def countPairs(self, n: int, edges: List[List[int]]) -> int:
        adj=[[] for i in range(n)]
        visited=[0]*(n)
        for i in edges:
            adj[i[0]].append(i[1])
            adj[i[1]].append(i[0])
        def bfs(node):
            ret=1
            for i in adj[node]:
                if visited[i]==0:
                    visited[i]=1
                    ret+=bfs(i)
            return ret
        total=0
        for i in range(len(adj)):
            connectedsize=0
            if visited[i]==0:
                visited[i]=1
                connectedsize=bfs(i)
                total+=(n-connectedsize)*connectedsize
        return total//2
