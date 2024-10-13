#include <stdio.h>


int main(void) {
    char count = 0, result = 0;
    short number = 0;
    scanf("%hhd", &count);
    result = count;

    for(char i = 0; i < count; i++) {
        scanf("%hd", &number);
        if(number == 1) result--;
        else {
            for(short j = 2; j < number; j++) {
                if(number % j == 0) {
                    result--;
                    break;
                }
            }
        }
    }

    printf("%hhd", result);

    return 0;
}