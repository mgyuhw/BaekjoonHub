import sys

def main():
    data = list(sys.stdin.readline().split())

    sys.stdout.write(str(len(data)))

if __name__ == "__main__":
    main()