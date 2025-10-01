#include <stdio.h>

int main(void)
{
    int n, rev = 0;
    printf("Enter a value\n");
    scanf("%d", &n);
    while ( n > 0)
    {
        rev = rev*10 + n%10;
        n = n/10;

    }
    printf("Reversed number is %d\n", rev);
}