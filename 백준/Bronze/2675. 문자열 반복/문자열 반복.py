cycle = int(input())

for _ in range(cycle):
    repeat, string = input().split()
    repeat = int(repeat)
    
    for char in string:
        print(char * repeat, end="")
    
    print()
