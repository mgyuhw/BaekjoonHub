#include <stdio.h>

int main(void)
{
    int T, A, B, x=1;
    scanf("%d", &T);
    for(;T >= 1; T--)
    {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d + %d = %d\n", x, A, B, A+B);
        x++;
    }
    
    return 0;
}