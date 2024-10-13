#include <stdio.h>

int main(void)
{
    int n, k = 0;
    scanf("%d", &n);
    for(;n>0;n--)
    {
        k = n+k;
    }
    printf("%d", k);
    
    return 0;
}