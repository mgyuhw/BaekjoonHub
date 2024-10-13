import sys

def main():
    # Input Step
    num = int(sys.stdin.readline())

    # Ready for Counting Sort
    counting = [0] * 10001

    # Count Data
    for i in range(num):
        counting[int(sys.stdin.readline())] += 1

    for i in range(1, 10001):
        count = counting[i]
        while count > 0:
            batch = min(count, 10000)
            sys.stdout.write(f"{i}\n" * batch)
            count -= batch

if __name__ == "__main__":
    main()
