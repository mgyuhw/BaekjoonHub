#include <stdio.h>

int main(void)
{
    int n, temp, count = 0;
    scanf("%d", &n);
    temp = n;
    do
    {
        temp = ((temp / 10) + (temp % 10)) % 10 + ((temp % 10) * 10);
        count++;
    } while(temp != n);
    printf("%d", count);
    return 0;
}