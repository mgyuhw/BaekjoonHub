#include <stdio.h>

int main(void) {
    short number[30] = {0,}, submit = 0, temp = 0;
    for(short i = 0; i < 30; i++) number[i] = i+1;

    for(short i = 0; i < 28; i++) {
        scanf("%hd", &submit);
        number[submit-1] = 0;
    }
    for(short i = 0; i < 30; i++) if(number[i] > 0) printf("%hd\n", number[i]);

    return 0;
}