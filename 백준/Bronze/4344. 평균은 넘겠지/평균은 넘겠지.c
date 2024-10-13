#include <stdio.h>

int main(void)
{
	int instance;
	double num, everage, result, count, sum, score[1000];

	scanf("%d", &instance);

	for (int t = 0; t < instance; t++)
	{
		for (int i = 0; i < 1000; i++)
		{
			score[i] = 0;
		}
		count = 0;
		sum = 0;

		scanf("%lf", &num);

		for (int i = 0; i < num; i++)
		{
			scanf("%lf", &score[i]);
		}
		for (int i = 0; i < num; i++)
		{
			sum += score[i];
		}
		everage = sum / num;
		for (int i = 0; i < num; i++)
		{
			if (score[i] - everage > 0) count++;
		}
		result = (count / num) * 100;
		printf("%.3lf%%\n", result); 
	}

	return 0;
}