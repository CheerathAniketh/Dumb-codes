#include <stdio.h>

int main(void)
{
    int n, a, rev = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    a = n;
    while ( n > 0)
    {
        rev = rev*10 + n%10;
        n = n/10;
    }

    if ( a == rev)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");  
}