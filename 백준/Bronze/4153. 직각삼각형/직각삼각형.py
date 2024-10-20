import sys

def main():
    while True:
        data = list(map(int, sys.stdin.readline().split()))
        if data == [0, 0, 0]: break
        data.sort()
        sys.stdout.write("right\n" if ((data[0] ** 2 + data[1] ** 2) == (data[2] ** 2)) else "wrong\n")

if __name__ == "__main__":
    main()
