import sys

def main():
    data = list(map(int, sys.stdin.read().splitlines()))

    sys.stdout.write(f"{max(data)}\n{data.index(max(data)) + 1}")

if __name__ == "__main__":
    main()