#include <stdio.h>

int main(void)
{
	int t = 0, r = 0;
	char string[21];

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 21; j++) string[j] = 0;
		scanf("%d %s", &r, string);
		for (int j = 0; ; j++)
		{
			if (string[j] == 0) break;
			else
			{
				for (int k = 0; k < r; k++) printf("%c", string[j]);
			}
		}
		printf("\n");
	}

	return 0;
}