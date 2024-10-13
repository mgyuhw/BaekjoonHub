#include <stdio.h>

int main(void)
{
	int num;
	
	scanf("%d ", &num);
	for (int n = 0; n < num; n++)
	{
		int count = 0, result = 0;
		char array[81] = { 0, };
		gets(array);
		for (int i = 0; i < 80; i++)
		{
			if (array[i] == 79)
			{
				result += ++count;
			}
			else count = 0;
		}
		printf("%d\n", result);

	}
	

	return 0;
}