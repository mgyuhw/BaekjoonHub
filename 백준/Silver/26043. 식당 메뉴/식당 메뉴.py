import sys
from collections import deque

def main():
    student = deque()
    want_menu = deque()
    good = []
    bad = []

    for _ in range(int(sys.stdin.readline())):
        buffer = list(map(int, sys.stdin.readline().split()))

        if buffer[0] == 1:
            student.append(buffer[1])
            want_menu.append(buffer[2])
        else:
            (good if buffer[1] == want_menu.popleft() else bad).append(student.popleft())

    good.sort()
    bad.sort()
    result = sorted(student)
    sys.stdout.write(f"{' '.join(map(str, good)) if good else 'None'}\n{' '.join(map(str, bad)) if bad else 'None'}\n{' '.join(map(str, result)) if result else 'None'}")

if __name__ == "__main__":
    main()
