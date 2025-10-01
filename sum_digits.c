#include <stdio.h>

int main(void)
{
    int n, sum = 0;
    printf("Enter a value\n");
    scanf("%d", &n);
    while ( n > 0)
    {
        sum = sum + n%10;
        
        n = n/10;
    }
    printf("Sum of digits is %d\n", sum);
}