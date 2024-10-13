#include <stdio.h>

int main(void)
{
    int year;
    scanf("%d", &year);
    if(year%400 == 0 | year%100 == 0 ^ year%4 == 0){
        putchar('1');
    }
    else putchar('0');
    
    return 0;
}