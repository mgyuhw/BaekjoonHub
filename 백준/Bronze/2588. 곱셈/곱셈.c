#include <stdio.h>

int main(void)
{
    int first, second, hundred, ten, temp, one;
    scanf("%d", &first);
    scanf("%d", &second);
    hundred = second / 100;
    one = second % 10;
    temp = second % 100;
    ten = (temp - one) / 10;
    printf("%d\n%d\n%d\n%d", first * one, first * ten, first * hundred, first * second);

    return 0;
}