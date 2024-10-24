def solution(quiz):
    answer = []

    for i in quiz:
        expression, result = i.split('=')
        expression = expression.split()

        if expression[1] == '+':
            answer.append('O' if int(result) == int(expression[0]) + int(expression[2]) else 'X')
        else:
            answer.append('O' if int(result) == int(expression[0]) - int(expression[2]) else 'X')

    return answer
