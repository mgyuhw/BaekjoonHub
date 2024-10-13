#include <stdio.h>
#include <stdlib.h>

int main(void) {
    short size=0, target=0, result = 0;
    scanf("%hd", &size);
    short *arr = (short *)calloc(size, sizeof(short));

    for(short i=0; i < size; i++) {
        scanf("%hd", (arr+i));
    }
    scanf("%hd", &target);

    for(short i=0; i < size; i++) {
        if (*(arr+i) == target) {
            result++;
        }
    }
    printf("%hd", result);

    free(arr);
    return 0;
}