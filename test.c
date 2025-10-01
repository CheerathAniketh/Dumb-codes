#include <stdio.h>

int main(void)
{
    int n, i;
    printf("How many elements do you want\n");
    scanf("%i", &n);

    int a[n];
    printf("Enter the elements you want\n");
    for (i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
    }

    int sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("sum is %i\n", sum);

}