import heapq

def astar(start, goal, neighbors, heuristic):
    open_set = []
    closed_set = set()

    heapq.heappush(open_set, (0, start))
    came_from = {}
    g_score = {start: 0}
    f_score = {start: heuristic(start, goal)}

    while open_set:
        _, current = heapq.heappop(open_set)

        if current == goal:
            path = [current]
            while current in came_from:
                current = came_from[current]
                path.append(current)
            return path[::-1]

        closed_set.add(current)

        for neighbor in neighbors(current):
            tentative_g_score = g_score[current] + 1
            if neighbor in closed_set or (neighbor in g_score and tentative_g_score >= g_score[neighbor]):
                continue

            came_from[neighbor] = current
            g_score[neighbor] = tentative_g_score
            f_score[neighbor] = tentative_g_score + heuristic(neighbor, goal)
            heapq.heappush(open_set, (f_score[neighbor], neighbor))

    return None

def neighbors(state):
    x, y = state
    return [(x+1, y), (x-1, y), (x, y+1), (x, y-1)]

def manhattan_distance(state, goal):
    x1, y1 = state
    x2, y2 = goal
    return abs(x1 - x2) + abs(y1 - y2)

start = (0, 0)
goal = (4, 4)
path = astar(start, goal, neighbors, manhattan_distance)

if path:
    print("Path found:", path)
else:
    print("No path found")
