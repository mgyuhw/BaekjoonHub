import sys

def main():
    data = sys.stdin.readline().rstrip()
    length = len(data)

    for i in range(int(data)):
        num = sum(map(int, str(i)))

        if (i + num) == int(data):
            sys.stdout.write(str(i))
            return

    sys.stdout.write("0")

if __name__ == "__main__":
    main()