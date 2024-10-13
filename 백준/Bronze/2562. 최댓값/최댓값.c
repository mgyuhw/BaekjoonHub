#include <stdio.h>

int main(void)
{
    int num, count, max = 0;
    for(int i = 1; i <= 9; i++)
    {
        scanf("%d", &num);
        if(num>max)
        {
            max = num;
            count = i;
        }
    }
    printf("%d\n%d", max, count);
    
    return 0;
}