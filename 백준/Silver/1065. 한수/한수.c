#include <stdio.h>

char judgment(int* p)
{
	if (*p == 1000) return 0;
	int hundred = 0, ten = 0, one = 0;
	hundred = *p / 100;
	ten = *p / 10 % 10;
	one = *p % 10;

	if (hundred - ten == ten - one) return 1;
	else return 0;
}

int main(void)
{
	int n = 0, result = 0;
	char num[1001] = { 0, };
	for (int i = 1; i < 100; i++) num[i] = 1;

	scanf("%d", &n);

	if (n < 100)
	{
		for (int i = 1; i <= n; i++) result += num[i];
		printf("%d", result);
	}
	else
	{
		for (int i = 100; i <= n; i++) num[i] = judgment(&i);
		for (int i = 1; i <= n; i++) result += num[i];
		printf("%d", result);
	}

	return 0;
}