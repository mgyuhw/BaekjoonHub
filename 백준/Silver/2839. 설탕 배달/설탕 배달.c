#include <stdio.h>

int main(void)
{
	int n, three = 0, five, result;
	scanf("%d", &n);

	while (1)
	{
        if (n % 5 == 0)
		{
			five = n / 5;
			result = three + five;
			printf("%d", result);
			break;
		}
		n -= 3;
		three++;
		if (n < 0)
		{
			printf("-1");
			break;
		}

	}

	return 0;
}