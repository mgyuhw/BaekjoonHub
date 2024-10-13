import sys

def main():
    count = int(sys.stdin.readline().rstrip())

    for i in range(count):
        data = list(map(int, sys.stdin.readline().split()))
        data2 = list(map(int, sys.stdin.readline().split()))
        line = list((i, data2[i]) for i in range(data[0]))
        data2.sort(reverse = True)

        print_count = 0
        turn = 0

        while True:
            if line[turn][1] == data2[print_count]:
                print_count += 1
                if line[turn][0] == data[1]:
                    sys.stdout.write(f"{print_count}\n")
                    break
            else:
                line.append((line[turn]))
                
            turn += 1

if __name__ == "__main__":
    main()
    