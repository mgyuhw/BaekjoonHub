#include <stdio.h>

int main(void)
{
	char count = 0;

	scanf("%hhd", &count);

	for (int a = 1; a <= count; a++)
	{
		for (int b = a; b > 0; b--)
		{
			putchar('*');
		}
		putchar('\n');
	}
	for (int a = count - 1; a > 0; a--)
	{
		for (int b = a; b > 0; b--)
		{
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
 }