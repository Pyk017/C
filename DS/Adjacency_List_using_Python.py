class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Graph:
    def __init__(self, size):
        self.size = size
        self.graph = [None] * size

    def add_edge(self, src, dest):
        node = Node(dest)
        node.next = self.graph[src]
        self.graph[src] = node

        node = Node(src)
        node.next = self.graph[dest]
        self.graph[dest] = node

    def print_graph(self):
        for i in range(self.size):
            temp = self.graph[i]
            print("Adjacency List of vertext {}\n head ".format(i), end=' ')
            while temp:
                print("-> {}".format(temp.data), end=' ')
                temp = temp.next        
            print()


n, m = map(int, input('Enter number of vertices and edges in the graph :- ').split())
graph = Graph(n)
print('Enter Vertices pairs :- ')
for _ in range(m):
    v1, v2 = map(int, input().split())
    graph.add_edge(v1-1, v2-1)

graph.print_graph()