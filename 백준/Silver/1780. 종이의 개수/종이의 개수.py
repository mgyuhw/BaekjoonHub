import sys

def divide(side, matrix, num):
    pos_one = zero = neg_one = False

    for value in matrix:
        if 1 in value:
            pos_one = True
        if 0 in value:
            zero = True
        if -1 in value:
            neg_one = True

        if all([pos_one, zero, neg_one]):
            break

    if sum([pos_one, zero, neg_one]) >= 2:
        side //= 3
        second_side = side * 2

        divide(side, [row[:side] for row in matrix[:side]], num)
        divide(side, [row[:side] for row in matrix[side:second_side]], num)
        divide(side, [row[:side] for row in matrix[second_side:]], num)

        divide(side, [row[side:second_side] for row in matrix[:side]], num)
        divide(side, [row[side:second_side] for row in matrix[side:second_side]], num)
        divide(side, [row[side:second_side] for row in matrix[second_side:]], num)

        divide(side, [row[second_side:] for row in matrix[:side]], num)
        divide(side, [row[second_side:] for row in matrix[side:second_side]], num)
        divide(side, [row[second_side:] for row in matrix[second_side:]], num)

    elif not pos_one and not zero and neg_one:
        num[0] += 1
        return
    elif not pos_one and zero and not neg_one:
        num[1] += 1
        return
    elif pos_one and not zero and not neg_one:
        num[2] += 1
        return

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    paper = [list(map(int, row.split())) for row in list(sys.stdin.read().splitlines())]
    numbered = [0, 0, 0]
    divide(n, paper, numbered)

    sys.stdout.write('\n'.join(map(str, numbered)))
