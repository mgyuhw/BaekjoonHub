#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char alphabet[26] = {0,}, string[100] = {0,}, index = 0;
    for(char i = 0; i < 26; i++) alphabet[i] = -1;

    scanf("%s", string);

    for(char i = 0; string[i] != 0; i++) {
        index = string[i] - 97;
        if(alphabet[index] == -1) alphabet[index] = i;
    }
    for(char i = 0; i < 26; i++) printf("%hhd ", alphabet[i]);

    return 0;
}