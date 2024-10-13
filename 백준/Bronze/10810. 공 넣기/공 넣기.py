import sys

def main():
    n, m = map(int, sys.stdin.readline().split())
    basket = [0] * n
    for _ in range(m):
        i, j, k = map(int, sys.stdin.readline().split())
        basket[i-1:j] = [k] * (j - i + 1)

    sys.stdout.write(' '.join(map(str, basket)))

if __name__ == "__main__":
    main()
