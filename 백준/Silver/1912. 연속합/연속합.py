import sys

def main():
    # Input Step
    count = int(sys.stdin.readline())
    progression = list(map(int, sys.stdin.readline().split()))

    # Dynamic Programming Memoization Step
    memo = [progression[0]]

    # Bottom - Up Dynamic Programming
    """
    주어진 수열의 모든 경우의 수를 계산
    단, 이전까지의 모든 합 + 다음 수 가 다음 수 단독보다 작을 경우
    다음 숫자를 그대로 memo에 저장.
    결과값은 memo 배열에 저장하여 재사용
    """

    for i in range(1, count):
        # 점화식, max 함수보다 if else가 조금 더 빠르다.
        memo.append(memo[i - 1] + progression[i] if memo[i - 1] + progression[i] > progression[i] else progression[i])

    sys.stdout.write(str(max(memo)))

if __name__ == "__main__":
    main()
