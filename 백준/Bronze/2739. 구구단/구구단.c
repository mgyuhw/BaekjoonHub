#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    for(int a = 1;a<=9;a++)
    {
        printf("%d * %d = %d\n", N, a, N*a);
    }
    
    return 0;
}