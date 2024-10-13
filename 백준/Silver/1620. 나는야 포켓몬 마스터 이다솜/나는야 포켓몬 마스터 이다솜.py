import sys
input = sys.stdin.read


def main():
    data = input().splitlines()

    # 첫 번째 줄에서 N과 M을 파싱
    N, M = map(int, data[0].split())

    # 한개의 딕셔너리 선언
    pocket_dict = {}

    # 한개의 딕셔너리에 key value 양쪽으로 저장
    for i in range(1, N + 1):
        pocket_dict[str(i)] = data[i]
        pocket_dict[data[i]] = str(i)

    # M개의 문제 입력 처리
    result = []
    for j in range(N + 1, N + M + 1):
        query = data[j]
        result.append(pocket_dict[query])


    # 결과 출력
    sys.stdout.write("\n".join(result) + "\n")


# 실행
if __name__ == "__main__":
    main()
