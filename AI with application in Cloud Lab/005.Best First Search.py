from queue import PriorityQueue

# Function to perform best-first search traversal
def best_first_search(actual_Src, target, n):
    # Initialize a list to keep track of visited vertices
    visited = [False] * n
    
    # Create a priority queue to store vertices based on their cost
    pq = PriorityQueue()
    # Put the actual source vertex into the priority queue with cost 0
    pq.put((0, actual_Src))
    # Mark the actual source vertex as visited
    visited[actual_Src] = True
    
    # Loop until the priority queue is empty
    while not pq.empty():
        # Get the vertex with the lowest cost from the priority queue
        u = pq.get()[1]
        # Print the vertex
        print(u, end=" ")
        # If the target vertex is found, break the loop
        if u == target:
            break

        # Iterate over the neighbors of the current vertex
        for v, c in graph[u]:
            # If the neighbor vertex has not been visited
            if not visited[v]:
                # Mark the neighbor vertex as visited
                visited[v] = True
                # Put the neighbor vertex into the priority queue with its cost
                pq.put((c, v))
    # Print a newline character after traversing the graph
    print()

# Function to add edges to the graph
def addedge(x, y, cost):
    graph[x].append((y, cost))
    graph[y].append((x, cost))

# Number of vertices in the graph
v = 14
# Initialize an empty graph represented as a list of lists
graph = [[] for i in range(v)]

# Add edges to the graph
addedge(0, 1, 3)
addedge(0, 2, 6)
addedge(0, 3, 5)
addedge(1, 4, 9)
addedge(1, 5, 8)
addedge(2, 6, 12)
addedge(2, 7, 14)
addedge(3, 8, 7)
addedge(8, 9, 5)
addedge(8, 10, 6)
addedge(9, 11, 1)
addedge(9, 12, 10)
addedge(9, 13, 2)

# Source vertex for the best-first search
source = 0
# Target vertex for the best-first search
target = 9
# Perform best-first search traversal
best_first_search(source, target, v)
