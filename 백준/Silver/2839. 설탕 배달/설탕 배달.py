data = int(input())

if data % 5 == 0 :
    answer = data // 5
else :
    five_count = data // 5
    data = data % 5
    while data % 3 != 0 :
        data = data + 5
        five_count -= 1
    if five_count < 0 :
        answer = -1
    else :
        three_count = data // 3
        answer = five_count + three_count


print(answer)