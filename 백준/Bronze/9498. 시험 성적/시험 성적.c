#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    switch(a/10){
        case 10:
        case 9:
            putchar('A');
            break;
        case 8:
            putchar('B');
            break;
        case 7:
            putchar('C');
            break;
        case 6:
            putchar('D');
            break;
        default:
            putchar('F');
            break;
    }
    
    return 0;
}