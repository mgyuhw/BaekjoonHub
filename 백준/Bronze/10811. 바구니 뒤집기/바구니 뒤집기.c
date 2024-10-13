#include <stdio.h>
#include <stdlib.h>

void swap(short *, short, short);

int main(void) {
    short number_of_basket = 0, cycle = 0, first = 0, last = 0;
    scanf("%hd %hd", &number_of_basket, &cycle);
    short *arr = (short *)calloc(number_of_basket, sizeof(short));
    for(short i = 0; i < number_of_basket; i++) *(arr+i) = i+1;

    for(short i = 0; i < cycle; i++) {
        scanf("%hd %hd", &first, &last);
        swap(arr, first, last);
    }

    for(short i = 0; i < number_of_basket; i++) printf("%hd ", *(arr+i));

    return 0;
}

void swap(short *arr, short first, short last) {
    short temp = 0;
    first--;
    last--;
    while((first < last)) {
        temp = *(arr+first);
        *(arr+first) = *(arr+last);
        *(arr+last) = temp;
        first++;
        last--;
    }
}