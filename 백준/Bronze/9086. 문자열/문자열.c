#include <stdio.h>

int main(void) {
    char word[1000] = {0,}, cycle = 0, count = 0;
    
    scanf("%hd", &cycle);

    for(char i = 0; i < cycle; i++) {
        for(short j = 0; word[j] != 0; j++) word[j] = 0;
        scanf("%s", word);
        count = 0;
        while(word[count] != 0) count++;
        printf("%c%c\n", word[0], word[count-1]);
    }

    return 0;
}