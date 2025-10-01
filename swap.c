// swap without using 3rd variable
#include <stdio.h>

int main(void)
{
    int a,b;
    printf("Enter the values of a, b\n");
    scanf("%i%i", &a, &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("now a = %i, b = %i\n", a, b);
}