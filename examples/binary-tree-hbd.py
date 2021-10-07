class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


class BinaryTree:
    def __init__(self, root):
        self.root = root


def print_inorder(root):
    if root:
        print_inorder(root.left)
        print(root.data, end='')
        print_inorder(root.right)


a_node = Node('A')
a_node_2 = Node('A')
b_node = Node('B')
d_node = Node('D')
h_node = Node('H')
h_node_2 = Node('H')
i_node = Node('I')
p_node = Node('P')
p_node_2 = Node('P')
r_node = Node('R')
t_node = Node('T')
y_node = Node('Y')
y_node_2 = Node('Y')

b_node.left = p_node
b_node.right = h_node
p_node.left = a_node
p_node.right = y_node
a_node.left = h_node_2
a_node.right = p_node_2
h_node.left = r_node
h_node.right = a_node_2
r_node.left = i_node
r_node.right = t_node
a_node_2.left = d_node
a_node_2.right = y_node_2

HBDTree = BinaryTree(b_node)
print_inorder(b_node)
