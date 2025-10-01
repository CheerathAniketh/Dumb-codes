#include <stdio.h>

int main(void)
{
    int a,b,c,d;
    printf("Enter values of a,b,c,d \n");
    scanf("%i%i%i%i", &a, &b, &c, &d);

    if (a>b && a>> c && a>>d)
    {
        printf("%i is the greatest number\n", a);
    }

    else if ( b > c && b > d)
    {
        printf("%i is the greatest number\n", b);

    }

    else if ( c > d)
    {
        printf("%i is the greatest number\n", c);

    }
    else
    {
        printf("%i is the greatest number\n", d);
    }
}