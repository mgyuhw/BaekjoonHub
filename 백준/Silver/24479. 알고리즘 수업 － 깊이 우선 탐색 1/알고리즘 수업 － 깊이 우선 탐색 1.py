import sys

def dfs(edge):
    stack = [edge]
    count = 1

    while stack:
        edge = stack.pop()
        if not visited[edge]:
            visited[edge] = count
            count += 1
            stack.extend(sorted(node[edge], reverse = True))

if __name__ == "__main__":
    data = list(map(int, sys.stdin.readline().split()))
    node = [[] for _ in range(data[0] + 1)]
    visited = [0] * (data[0] + 1)

    for i in range(data[1]):
        vertex = list(map(int, sys.stdin.readline().split()))
        node[vertex[0]].append(vertex[1])
        node[vertex[1]].append(vertex[0])

    dfs(data[2])

    sys.stdout.write('\n'.join(map(str, visited[1:])))