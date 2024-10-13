#include <stdio.h>

int main(void)
{
    int n, x, num;

    scanf("%d %d", &n, &x);

    for(int a=0; a<n; a++)
    {
        scanf("%d", &num);
		
        if(x>num) printf("%d ", num);
    }
	
	return 0;
}