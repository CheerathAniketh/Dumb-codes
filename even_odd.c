#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter a number\n");
    scanf("%i", &a);
    if ( a%2==0)
    {
        printf("%i is an even number\n", a);

    }
    else
    {
        printf("%i is an odd number\n", a);
    }
}