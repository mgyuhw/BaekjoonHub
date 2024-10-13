#include <stdio.h>

int main(void)
{
	int n, sum = 0;
	char array[101] = { 0, };
	
	scanf("%d ", &n);
	gets(array);

	for (int i = 0; i < n; i++)	array[i] = array[i] - '0';
	for (int i = 0; i < n; i++) sum += array[i];
	printf("%d", sum);

	return 0;
}