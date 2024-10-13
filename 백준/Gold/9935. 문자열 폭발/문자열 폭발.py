import sys

def main():
    text = sys.stdin.readline().strip()
    bomb = list(sys.stdin.readline().rstrip())
    stack = []
    bomb_len = len(bomb)

    for i in text:
        stack.append(i)
        if i == bomb[-1] and stack[-bomb_len:] == bomb:
            del stack[-bomb_len:]

    sys.stdout.write(''.join(stack) if stack else "FRULA")

if __name__ == "__main__":
    main()
