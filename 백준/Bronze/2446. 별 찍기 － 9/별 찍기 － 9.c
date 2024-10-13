#include <stdio.h>

int main(void)
{
	char count = 0;

	scanf("%hhd", &count);

	for (int a = 0; a < count; a++)
	{
		for (int i = a; i > 0; i--)
		{
			putchar(' ');
		}
		for (int b = (count - a) * 2 - 1; b > 0; b--)
		{
			putchar('*');
		}
		putchar('\n');
	}
	for (int a = 1; a <= count - 1; a++)
	{
		for (int i = count - a - 1; i > 0; i--)
		{
			putchar(' ');
		}
		for (int b = a * 2 + 1; b > 0; b--)
		{
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}