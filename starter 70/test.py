# Helper function to compute the AND-value of the descendants of a given node
def compute_and_value(node, tree, values):
    and_value = values[node]
    for child in tree[node]:
        and_value &= compute_and_value(child, tree, values)
    return and_value

# Function to process queries
def process_queries(n, tree, queries):
    # Initialize values of all nodes to 0
    values = [0] * (n+1)

    # Process each query
    for query in queries:
        # Query of type 1: Update value of node
        if query[0] == 1:
            node = query[1]
            # If node is a leaf, set its value to 1
            if len(tree[node]) == 0:
                values[node] = 1
            # Otherwise, compute AND-value of its descendants
            else:
                values[node] = compute_and_value(node, tree, values)
        # Query of type 2: Find number of good edges
        else:
            # Initialize count of good edges to 0
            count = 0
            # Perform DFS traversal of the tree
            stack = [(1, -1)] # (node, parent)
            while stack:
                node, parent = stack.pop()
                # Compare AND-value of subtrees on either side of the edge
                if parent != -1 and values[node] & values[parent] == values[node]:
                    count += 1

                for child in tree[node]:
                    if child != parent:
                        stack.append((child, node))
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
        process_queries(n,graph,queries)