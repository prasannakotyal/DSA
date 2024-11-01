from collections import deque
'''Graphs
It has nodes and edges. They can be represented using:
1. Edge list - list containing the connections of to,from example - [[to,from]]
2. Adjacency matrix - A matrix containing no. of vertices as rows,cols and marked as 1 in the matrix
corresponding to the graph if there is an edge
3. Adjacency list - a hashmap/dictionary containing keys as node and values as a list of connections'''

'''TC and SC for BFS and DFS  = O(V+E)'''
# note - Trees = they are connected(we can go from any node to another in the graph) acyclic graphs.

# Array of Edges (Directed) [Start, End]
n = 8
A = [[0, 1], [1, 2], [0, 3], [3, 4], [3, 6], [3, 7], [4, 2], [4, 5], [5, 2]]

# Converting above adjacency list to adjacency matrix

M = []
for i in range(len(A)):
    M.append([0]*len(A))

for u,v in A:
    M[u][v]=1

# print(M) 

# Converting adjacency list to adjacency list

from collections import defaultdict

graph = defaultdict(list)

for u,v in A:
    graph[u].append(v)

print(graph)

'''DFS using recursion'''
def dfs_recursive(node):
    print(node)
    for neighbor in graph[node]:
        if neighbor not in seen:
            seen.add(neighbor)
            dfs_recursive(neighbor)

source = 0
seen = set()
seen.add(source)
dfs_recursive(source)


'''DFS using iteration'''
source = 0
seen = set()
seen.add(source)

def dfs_iteration(node):
    stack = [source]
    while stack:
        node = stack.pop()
        print(node)
        for neighbor in graph[node]:
            if neighbor not in seen:
                seen.add(neighbor)
                stack.append(neighbor)


'''BFS using iteration'''
source = 0
seen = set()
seen.add(source)

def bfs_iteration(node):
    q = deque()
    q.append(source)
    while q:
        node = q.popleft()
        print(node)
        for neighbor in graph[node]:
            if neighbor not in seen:
                seen.add(neighbor)
                q.append(neighbor)

bfs_iteration(source)