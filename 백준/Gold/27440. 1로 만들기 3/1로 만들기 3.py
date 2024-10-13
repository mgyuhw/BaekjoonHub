import sys
from collections import deque
input = sys.stdin.readline

N = int(input())
dq = deque([(N, 0)]) # 값, 연산횟수
visited = {}

while dq:
  k, cnt = dq.popleft()
  if k == 1:
    break
  if k % 3 == 0:
    if k//3 not in visited:
      visited[k//3] = cnt + 1
      dq.append((k//3, cnt + 1))
  if k % 2 == 0:
    if k//2 not in visited:
      visited[k//2] = cnt + 1
      dq.append((k//2, cnt + 1))
  if k - 1 not in visited:
    visited[k-1] = cnt + 1
    dq.append((k-1, cnt + 1))

print(cnt)