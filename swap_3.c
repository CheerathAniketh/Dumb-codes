//swapping values using third variable
#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Enter the value  of a and b\n");
    scanf("%i%i", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("now a = %i, b = %i\n", a, b);
    
}