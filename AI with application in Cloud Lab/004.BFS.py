from collections import defaultdict, deque

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)

    def addEdge(self, u, v):
        self.graph[u].append(v)

    def BFS(self, s):
        visited = set()
        queue = deque([s])
        visited.add(s)

        while queue:
            s = queue.popleft()
            print(s, end=" ")

            for i in self.graph[s]:
                if i not in visited:
                    queue.append(i)
                    visited.add(i)

# Driver code
if __name__ == '__main__':
    g = Graph()
    g.addEdge(0, 1)
    g.addEdge(0, 2)
    g.addEdge(1, 2)
    g.addEdge(2, 0)
    g.addEdge(2, 3)
    g.addEdge(3, 3)

    print("Following is Breadth First Traversal"
          " (starting from vertex 2)")
    g.BFS(2)
