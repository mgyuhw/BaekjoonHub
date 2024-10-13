import sys

def main():
    data = sys.stdin.read().splitlines()
    count = int(data[0])
    remain = {}

    for i in range(1, count + 1):
        name, state = data[i].split()

        if state == "enter": remain[name] = state
        else: del remain[name]

    sys.stdout.write("\n".join(sorted(remain.keys(), reverse = True)))

if __name__ == "__main__":
    main()
