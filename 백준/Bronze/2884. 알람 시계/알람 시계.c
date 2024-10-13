#include <stdio.h>

int main(void)
{
    unsigned int H, M;
    scanf("%d %d", &H, &M);
    if (M>=45){
        M -= 45;
        printf("%d %d", H, M);
    }
    else {
        M = 60 - 45 + M;
        if (H == 0) H = 23;
        else H -= 1;
        printf("%d %d", H, M);
    }
    
    return 0;
}