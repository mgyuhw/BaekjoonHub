import sys

def find_max(count, left, mid, right, memo):
    for i in range(1, count):
        # Left Position
        memo[0], memo[1], memo[2] = max((memo[0] + left[i]), (memo[1] + left[i])), max((memo[0] + mid[i]), (memo[1] + mid[i]), (memo[2] + mid[i])), max((memo[1] + right[i]), (memo[2] + right[i]))

    sys.stdout.write(str(max(memo[0], memo[1], memo[2])) + ' ')

def find_min(count, left, mid, right, memo):
    for i in range(1, count):
        memo[0], memo[1], memo[2] = min((memo[0] + left[i]), (memo[1] + left[i])), min((memo[0] + mid[i]), (memo[1] + mid[i]), (memo[2] + mid[i])), min((memo[1] + right[i]), (memo[2] + right[i]))

    sys.stdout.write(str(min(memo[0], memo[1], memo[2])))

def main():
    count = int(sys.stdin.readline())
    left, mid, right = [[0] * count for _ in range(3)]
    max_memo = [0 for _ in range(3)]
    min_memo = [0 for _ in range(3)]

    for i in range(count):
        left[i], mid[i], right[i] = list(map(int, sys.stdin.readline().split()))

    max_memo[0], max_memo[1], max_memo[2] = left[0], mid[0], right[0]
    min_memo[0], min_memo[1], min_memo[2] = left[0], mid[0], right[0]

    find_max(count, left, mid, right, max_memo)
    find_min(count, left, mid, right, min_memo)

if __name__ == "__main__":
    main()
    