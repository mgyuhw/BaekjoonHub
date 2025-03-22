import sys

data = list(map(int, sys.stdin.read().split()))

for i in range(1, data[0]*2+1, 2):
    sys.stdout.write(str(data[i] + data[i+1]) + '\n')