#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Enter the values of three numbers\n");
    scanf("%i%i%i", &a, &b, &c);

    if ( a > b)
    {
        if (a > c)
        {
            printf("%i is the greatest number\n", a);
        }

        else
        {
            printf("%i is the greatest number\n", c);
        }
    }

    else 
    {
        if (b > c)
        {
            printf("%i is the greatest number\n", b);
        }

        else
        {
            printf("%i is the greatest number\n", c);
        }
    }

}