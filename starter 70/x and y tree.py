class solve:


    def notcompute(self,node, graph, j):
        san = j[node]
        for k in graph[node]:
            san=san&self.notcompute(k, graph, j)
        return san

    def force(self,n, graph, queries):
        j = [0]*(n+1)

        for query in queries:
            if query[0] == 1:
                node = query[1]
                if len(graph[node]) == 0:
                    j[node] = 1
                else:
                    j[node] = self.notcompute(node, graph, j)
            else:
                count = 0
                stack = [(1, -1)] 
                while stack:
                    node, parent = stack.pop()
                    if parent != -1 and j[node] & j[parent] == j[node]:
                        count += 1

                    for k in graph[node]:
                        if k != parent:
                            stack.append((k, node))
                print(count)
if __name__=="__main__":
    for _ in range(int(input())):
        n=int(input())
        graph=[[] for i in range(n+1)]
        score=n-1
        total=n*(n+1)//2
        for i in range(0,n-1):
            u,v=map(int,input().split())
            graph[u].append(v)
        q=int(input())
        dp=[0 for i in range(n+1)]
        queries=[]
        for i in range(q):
            y=list(map(int,input().split()))
            queries.append(y)
        s=solve()
        s.force(n,graph,queries)