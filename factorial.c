#include <stdio.h>

int main(void)

{    int n, i , fact = 1;

    printf("Enter a value\n");
    scanf("%d", &n);
    for(i = 1; i <=n; i++)
    {
        fact = fact*i;

    }
    printf("Factorial of %d is %d\n", n, fact);
}