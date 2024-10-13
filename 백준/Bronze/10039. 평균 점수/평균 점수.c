#include<stdio.h>

int main(void)
{
	char students[5] = { 0, };
	short total = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%hhd", students + i);
		if (students[i] < 40) students[i] = 40;
		total += students[i];
	}
	printf("%hd", total / 5);

	return 0;
}