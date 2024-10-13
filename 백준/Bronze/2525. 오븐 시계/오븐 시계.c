#include <stdio.h>

int main(void)
{
    short hour=0, minute=0, time = 0;
    
    scanf("%hd %hd %hd", &hour, &minute, &time);
    
    minute = minute + time;
    hour = hour + (minute / 60);
    minute = minute % 60;

    if(hour >= 24) {
        hour -= 24;
    }
    
    printf("%hd %hd", hour, minute);

    return 0;
}