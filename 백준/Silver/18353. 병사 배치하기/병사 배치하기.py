import sys

"""
이진탐색을 이용한 최장 감소 부분 수열

기존의 bisect 라이브러리는 오름차순에서 사용이 가능
따라서 내림차순에서 사용이 가능한 이진탐색 함수 작성
"""

def custom_binary_search(arr, target):
    start = 0
    end = len(arr) - 1

    while start <= end:
        mid = (start + end) // 2

        if arr[mid] == target: return mid
        elif arr[mid] > target: start = mid + 1
        else: end = mid - 1

    return start

def main():
    # Data Input
    count = int(sys.stdin.readline())
    data = list(map(int, sys.stdin.readline().split()))

    # Memo variable for Memoization
    memo = [data[0]]

    # Binary Search
    for i in range(1, count):
        if data[i] < memo[-1]:
            memo.append(data[i])
        else:
            memo[custom_binary_search(memo, data[i])] = data[i]

    sys.stdout.write(str(count - len(memo)))

if __name__ == "__main__":
    main()
    