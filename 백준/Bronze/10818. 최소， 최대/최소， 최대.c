#include <stdio.h>

void loot(int);

int max = -1000000, min = 1000000;

int main(void) {
    int size = 0;
    scanf("%d", &size);

    int arr[size]; //대신 이 방법은 int arr[size] = {0};처럼 초기화 불가

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++) {
        loot(arr[i]);
    }

    printf("%d %d", min, max);

    return 0;
}

void loot(int num) {
    if(num > max)
    {
        max = num;
    }
    if(num < min)
    {
        min = num;
    }
}