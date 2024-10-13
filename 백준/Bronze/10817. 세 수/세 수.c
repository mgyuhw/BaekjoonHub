#include <stdio.h>

int main(void)
{
    unsigned int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a==b) printf("%d", a);
    else if (a==c) printf("%d", a);
    else if (b==c) printf("%d", b);
    else
    {
        if (a>b)
        {
            if (c>a) printf("%d", a);
            else if (c<a)
            {
                if (b>c) printf("%d", b);
                else if (b<c) printf("%d", c);
            }
        }
        else if (a<b)
        {
            if (c>b) printf("%d", b);
            else if (c<b)
            {
                if (a>c) printf("%d", a);
                else if (a<c) printf("%d", c);
            }
        }   
    }
    
    
    return 0;
}