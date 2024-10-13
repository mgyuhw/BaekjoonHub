#include <stdio.h>

int main(void) {
    char word[101] = {0,}, count = 0;

    scanf("%s", word);

    while(word[count] > 0) {
        count++;
    }

    printf("%hd", count);
    return 0;
}