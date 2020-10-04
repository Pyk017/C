from collections import defaultdict

class Graph:

    def __init__(self, size):
        self.size = size
        self.graph = defaultdict(list)
        self.visited = [False] * size

    
    def add_edge(self, src, dest):
        self.graph[src] = dest
        self.graph[dest] = src

    
    def bfs(self, start):

        queue = list()
        queue.append(start)
        
        self.visited[start] = True

        while queue:
            
            temp = queue.pop(0)
            print(temp, end=' ')

            for i in self.graph[temp]:
                if not self.visited[i]:
                    queue.append(i)
                    self.visited[i] = True


    def bft(self):
        for i in range(self.size):
            if not self.visited[i]:
                self.bfs(i)

    def print_graph(self):
        for i in range(self.size):
            temp = self.graph[i]
            print("Adjacency list of vertex {}\n head ".format(i), end=' ')
            for j in temp:
                print(j, end=' ')
            print()


n, m = map(int, input('Enter the number of vertices and Edges :- ').split())
graph = Graph(n)
print("Enter vertices pairs :- ")
for _ in range(m):
    a, b = map(int, input().split())
    graph.add_edge(a, b)

graph.print_graph()
graph.bfs(0)
            
