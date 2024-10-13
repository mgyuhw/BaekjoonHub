#include <stdio.h>

int main(void)
{
    int a, b, count;
    
    scanf("%d", &count);
    for(int i = 0; i < count; i++)
    {
        scanf("%d,%d", &a, &b);
        printf("%d\n", a+b);
    }
    
    return 0;
}