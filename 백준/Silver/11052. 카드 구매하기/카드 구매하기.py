import sys

def main():
    count = int(sys.stdin.readline())
    pack = [0] + list(map(int, sys.stdin.readline().split()))
    memo = [0] * (count + 1)

    for i in range(1, count + 1):
        for j in range(1, i + 1):
            memo[i] = max(memo[i], memo[i - j] + pack[j])

    print(max(memo))

if __name__ == "__main__":
    main()