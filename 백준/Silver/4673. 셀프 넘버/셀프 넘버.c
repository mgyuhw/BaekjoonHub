#include <stdio.h>

void calculate(int* p)
{
	int temp = *p;
	*p = temp + (temp / 1000) + (temp / 100 % 10) + (temp % 100 / 10) + (temp % 10);
}

int main(void)
{
	char num[10001] = { 0, };
	int i = 1, n = 0;

	for (; i <= 10000; i++)
	{
		if (1 == num[i]) continue;
		else
		{
			n = i;
			while (1)
			{
				calculate(&n);
				if (n <= 10000)
				{
					num[n] = 1;
				}
				else break;
			}
		}
	}
	for (i = 1; i <= 10000; i++)
	{
		if (1 == num[i]) continue;
		else printf("%d\n", i);
	}
	
	return 0;
}