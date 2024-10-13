#include <stdio.h>

int main(void)
{
    int num, count = 0, array[42] = {0, };
    for(int i = 0; i<10; i++)
    {
        scanf("%d", &num);
        array[num%42]++;
    }
    for(int i = 0; i < 42; i++)
    {
        if(array[i] != 0) count++;
    }
    printf("%d", count);
    
    return 0;
}