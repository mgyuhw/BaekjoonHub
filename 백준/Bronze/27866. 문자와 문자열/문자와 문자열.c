#include <stdio.h>

int main(void) {
    char word[1001] = {0,};
    short index = 0;

    scanf("%s\n%hd", word, &index);
    printf("%c", word[index-1]);
    return 0;
}