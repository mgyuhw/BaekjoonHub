n, c = map(int, input().split())
sequence = list(map(int, input().split()))
d = dict()
for i in sequence:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1

d = sorted(d.items(), key=lambda x:x[1], reverse=True)
for k, v in d:
    for _ in range(v):
        print(str(k) + " ", end="")