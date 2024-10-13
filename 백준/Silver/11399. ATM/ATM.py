if __name__ == "__main__":
    result, last = 0, 0

    people = input()
    time_per_person = list(map(int, input().split()))

    time_per_person.sort()

    for i in time_per_person:
        last += i
        result += last

    print(result)