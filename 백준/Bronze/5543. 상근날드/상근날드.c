#include <stdio.h>

int main(void)
{
	int burger[3] = { 0, }, beverage[2] = { 0, }, burgerMin = 2000, beverageMin = 2000;
	
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &burger[i]);
		if (burger[i] <= burgerMin) burgerMin = burger[i];
	}
	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &beverage[i]);
		if (beverage[i] <= beverageMin) beverageMin = beverage[i];
	}

	printf("%d", burgerMin + beverageMin - 50);

	return 0;
}