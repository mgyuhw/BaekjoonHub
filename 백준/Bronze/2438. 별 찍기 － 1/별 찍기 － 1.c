#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    for(int a = 1; a <= N; a++)
    {
        for(int b = a; b >= 1; b--)
        {
            putchar('*');
        }
        putchar('\n');
    }
    
    return 0;
}