#include <stdio.h>

int main(void)
{
    int T, A, B, x=1;
    scanf("%d", &T);
    for(; T >= 1; T--)
    {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", x, A+B);
        x+=1;
    }
    
    return 0;
}