#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    for(int a = N; a >= 1; a--)
    {
        for(int b = a; b >= 2; b--)
        {
            putchar(' ');
        }
        for(int c = 0; c <= (N-a); c++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    
    return 0;
}