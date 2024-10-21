import sys

def main():
    num = int(sys.stdin.readline())
    count = 0
    name_set = set()

    for _ in range(num):
        buffer = sys.stdin.readline().rstrip()

        if buffer != "ENTER":
            name_set.add(buffer)
        else:
            count += len(name_set)
            name_set.clear()

    count += len(name_set)
    sys.stdout.write(str(count))

if __name__ == "__main__":
    main()
    