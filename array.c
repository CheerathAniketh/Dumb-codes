#include <stdio.h>

int main(void)
{
    int n, i;
    printf("How many elements do you want\n");
    scanf("%i", &n);

    int a[n];

    printf("enter the elements ");
    for ( i =  1; i <= n; i++)
    {
        scanf("%i", &a[i]);
    
    }
    int sum = 0;

    for ( i =1; i <= n; i++)
    {
        sum += a[i];

    }

    printf("SUM = %i\n", sum);
}