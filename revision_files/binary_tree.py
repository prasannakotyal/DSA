'''Binary search trees'''

'''
Some basic notes 
Trees - they are basically a sub category of graphs, they are directed graphs 
Leaf - the nodes which do not have any children
index of any ele - given an index 'i' its left child will be located at index '2i' and right at '2i+1' 
Height - the max no. of nodes from top to the lowest leaf
DFS (uses stack) - to go till the depth of tree, has inorder - node(process it), left, right
                                        preorder - left, node(process it), right
                                        postorder - left, right, node(process it)
BFS (uses queue) - level order traversal,  

general idea - visit the nodes top down left to right

'''

'''Binary search trees - all nodes on the left are smaller than root and all nodes on the right are greater than root'''
# for searching in a BST - TC = O(logn)

class node:
    def __init__(self,data,left=None,right=None):
        self.data = data
        self.left = left
        self.right = right

    def __repr__(self):
        return str(self.data)

A = node(1)
B = node(2)
C = node(3)
D = node(4)
E = node(5)
F = node(10)

A.left = B
A.right = C
B.left = D
B.right = E
C.left = F


# pre order traversal/dfs recursive way
def pre_order(node):
    if not node:
        return
    print(node)
    pre_order(node.left)
    pre_order(node.right)

print('\n')
pre_order(A)

# post order traversal
def post_order(node):
    if not node:
        return
    post_order(node.left)
    post_order(node.right)
    print(node)

print('\n')
post_order(A)

# inorder traversal
def inorder(node):
    if not node:
        return
    inorder(node.left)
    print(node)
    inorder(node.right)

print('\n')
inorder(A)


#iterative pre order traversal

def iterative_pre_order(node):
    stack = [node]
    while stack:
        node = stack.pop()
        print(node)

        if (node.right): stack.append(node.right)
        if (node.left): stack.append(node.left)

print('\n')
iterative_pre_order(A)

#breadth first search
from collections import deque
def bfs(node):
    q = deque()
    q.append(node)
    while q:
        node = q.popleft()
        print(node)
        if node.left: q.append(node.left)
        if node.right: q.append(node.right)

print('\n')
bfs(A)