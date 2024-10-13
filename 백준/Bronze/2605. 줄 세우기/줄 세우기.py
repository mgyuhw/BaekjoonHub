num_student = int(input())
student = list(map(int, input().split()))
order = []

for i in range(num_student):
    order.insert(student[i], i + 1)

print(*order[::-1])