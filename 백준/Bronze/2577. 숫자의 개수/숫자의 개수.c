#include <stdio.h>

int main(void)
{
    int a, b, c, total, rest, array[10] = {0, };
    scanf("%d %d %d", &a, &b, &c);
    total = a * b * c;
    while(total>0)
    {
        rest = total %10;
        array[rest]++;
        total = total/10;
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}