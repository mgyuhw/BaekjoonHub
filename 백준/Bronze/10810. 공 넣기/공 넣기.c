#include <stdio.h>
#include <stdlib.h>

int main(void) {
    short number_of_basket = 0, cycles = 0, first_basket = 0, last_basket = 0, ball = 0;

    scanf("%hd %hd", &number_of_basket, &cycles);
    short *arr = (short *)calloc(number_of_basket, sizeof(short));

    for(short i = 0; i < cycles; i++) {
        scanf("%hd %hd %hd", &first_basket, &last_basket, &ball);
        for(short j = first_basket; j <= last_basket; j++) {
            *(arr+(j-1)) = ball;
        }
    }

    for(short i = 0; i < number_of_basket; i++) printf("%hd ", *(arr+i));

    return 0;
}