#include <stdio.h>

int main(void)
{
	short x = 0, y = 0;

	scanf("%hd %hd", &x, &y);

	if (x > 0 && y > 0) putchar('1');
	else if (x < 0 && y > 0) putchar('2');
	else if (x < 0 && y < 0) putchar('3');
	else if (x > 0 && y < 0) putchar('4');

	return 0;
}