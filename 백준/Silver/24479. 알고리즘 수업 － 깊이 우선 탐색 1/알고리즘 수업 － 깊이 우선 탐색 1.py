import sys
sys.setrecursionlimit(200000 * 2)

g_count = 1

def dfs(edge):
    global g_count

    visited[edge] = g_count
    g_count += 1
    node[edge].sort()

    for i in node[edge]:
        if not visited[i]:
            dfs(i)

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