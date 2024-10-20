import sys

def main():
    data = sys.stdin.readline().rstrip()
    
    for i in range(int(data) - (len(data) * 9) if int(data) - (len(data) * 9) > 0 else 0, int(data)):
        if (i + sum(map(int, str(i)))) == int(data):
            sys.stdout.write(str(i))
            return

    sys.stdout.write("0")

if __name__ == "__main__":
    main()
