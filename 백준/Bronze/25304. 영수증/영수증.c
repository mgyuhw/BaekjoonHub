#include <stdio.h>

int main(void) {
    unsigned int total = 0, cal = 0;
    int price = 0;
    char item = 0, count = 0;

    scanf("%u %hhd", &total, &item);

    for(int i = 1; i <= item; i++) {
        scanf("%d %hhd", &price, &count);
        cal = cal + price * count;
    }

    if(cal == total) puts("Yes");
    else puts("No");

    return 0;
}