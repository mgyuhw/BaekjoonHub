import sys

if __name__ == "__main__":
    meeting = int(sys.stdin.readline())
    meeting_time = []
    count = 0
    for i in range(meeting):
        meeting_time.append(list(map(int, sys.stdin.readline().split())))

    meeting_time.sort(key=lambda x: (x[1],x[0]))

    last = meeting_time[0][1]
    count += 1
    for i in range(1, meeting):
        if meeting_time[i][0] >= last:
            last = meeting_time[i][1]
            count += 1

    print(count)