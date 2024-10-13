import sys

def main():
    number = int(sys.stdin.readline().rstrip())

    for i in range(number):
        data = sys.stdin.readline().rstrip()
        stack = []

        for j in data:
            if j == "(":
                stack.append(j)
            elif j == ")":
                if stack and stack[-1] == "(":
                    stack.pop()
                else:
                    stack = True
                    break

        sys.stdout.write("NO\n" if stack else "YES\n")

if __name__ == "__main__":
    main()
