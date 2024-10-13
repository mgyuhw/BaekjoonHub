import sys

def main():
    data = list(map(int, sys.stdin.read().split()))
    count = 0

    for i in range(1, data[0] + 1):
        if data[-1] == data[i]:
            count += 1

    print(count)

if __name__ == "__main__":
    main()
    