#include <stdio.h>

int main(void) {
    short byte = 0;

    scanf("%hd", &byte);

    byte = byte / 4;

    while (byte--) printf("long ");
    printf("int");

    return 0;
}