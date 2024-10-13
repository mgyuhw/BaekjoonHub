#include <stdio.h>
#include <stdlib.h>

int main(void) {
    short number_of_basket = 0, cycles = 0, first_basket = 0, last_basket = 0, temp = 0;

    scanf("%hd %hd", &number_of_basket, &cycles);
    short *arr = (short *)calloc(number_of_basket, sizeof(short));
    for(short i = 0; i < number_of_basket; i++) *(arr+i) = i+1;

    for(short i = 0; i < cycles; i++) {
        scanf("%hd %hd", &first_basket, &last_basket);
        temp = *(arr+(first_basket-1));
        *(arr+(first_basket-1)) = *(arr+(last_basket-1));
        *(arr+(last_basket-1)) = temp;
    }

    for(short i = 0; i < number_of_basket; i++) printf("%hd ", *(arr+i));

    free(arr);
    return 0;
}