from collections import deque

def minimum_steps(start, target, edges):
    graph = {}
    for u, v in edges:
        if u not in graph:
            graph[u] = []
        if v not in graph:
            graph[v] = []
        graph[u].append(v)
        graph[v].append(u)

    queue = deque([(start, 0)])
    visited = set([start])

    while queue:
        city, steps = queue.popleft()
        if city == target:
            return steps

        for adjacent_city in graph.get(city, []):
            if adjacent_city not in visited:
                queue.append((adjacent_city, steps + 1))
                visited.add(adjacent_city)

    return -1

# Example usage:
start = 2
target = 7
edges = [(0, 1), (4, 0), (4, 2), (2, 3), (1, 3), (2, 5), (5, 6), (6, 7), (6, 3)]
result = minimum_steps(start, target, edges)
print(result)  # Output: 4
