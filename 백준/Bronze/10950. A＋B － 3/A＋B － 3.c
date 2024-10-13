#include <stdio.h>

int main(void)
{
    int T, A, B;
    scanf("%d", &T);
    for(;T>0;T--)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
    
    return 0;
}