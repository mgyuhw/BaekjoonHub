count = int(input())
result = count

numbers = list(map(int, input().split()))

for number in numbers:
    if(number == 1): result -= 1
    else:
        for j in range(2, number):
            if(number % j == 0):
                result -= 1
                break

print(result)