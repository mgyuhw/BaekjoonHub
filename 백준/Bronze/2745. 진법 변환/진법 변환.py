num_list = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

n, b = input().split()
base = int(b)
answer = 0

# 입력된 숫자를 거꾸로 읽어가면서 각 자리의 값을 계산
for i, num in enumerate(n[::-1]):
    digit_value = num_list.index(num) # 현재 자리의 숫자에 해당하는 값
    answer += digit_value * (base ** i)

print(answer)