import sys
sys.setrecursionlimit(3000)

dx = (-1, 0, 1, -1, 1, -1, 0, 1)
dy = (-1, -1, -1, 0, 0, 1, 1, 1)
g_width = g_height = 0
g_matrix = []

def dfs(y, x):
    for i in range(8):
        nx = x + dx[i]
        ny = y + dy[i]

        if 0 <= nx < g_width and 0 <= ny < g_height and g_matrix[ny][nx]:
            g_matrix[ny][nx] = 0
            dfs(ny, nx)

def main():
    global g_width, g_height, g_matrix

    while True:
        g_width, g_height = map(int, sys.stdin.readline().split())
        if g_width == 0 and g_height == 0: break

        g_matrix = [[0] * g_width for _ in range(g_height)]
        count = 0

        for i in range(g_height):
            g_matrix[i] = list(map(int, sys.stdin.readline().split()))

        for i in range(g_height):
            for j in range(g_width):
                if g_matrix[i][j]:
                    g_matrix[i][j] = 0
                    dfs(i,j)
                    count += 1

        sys.stdout.write(str(count) + "\n")

if __name__ == "__main__":
    main()
