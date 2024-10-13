#include <stdio.h>

int main(void) {
    char a = 0, b = 0;

    while((scanf("%hhd %hhd", &a, &b))!=EOF) {
        printf("%d\n", a + b);
    }

    return 0;
}