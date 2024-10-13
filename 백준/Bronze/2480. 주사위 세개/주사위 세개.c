#include <stdio.h>

int main(void) {
    char first = 0, second = 0, third = 0;
    char first_second = 0, second_third = 0, first_third = 0, max = 0;
    short result = 0;

    scanf("%hhd %hhd %hhd", &first, &second, &third);

    first_second = first == second ? 1 : 0;
    second_third = second == third ? 1 : 0;
    first_third = first == third ? 1 : 0;

    switch (first_second + second_third + first_third)
    {
    case 0:
        max = ((first > second) && (first > third)) ? first : second > third ? second : third;
        result = max * 100;
        break;
    case 1:
        max = first_second ? first : second_third ? second : third;
        result = 1000 + max * 100;
        break;
    case 3:
        max = first;
        result = 10000 + max * 1000;
        break;
    }

    printf("%hd", result);

    return 0;
}