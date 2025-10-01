// finding area and perimeter of rectangle
#include <stdio.h>

int main(void)
{
    int a,b;
    printf("Enter the values of a and b\n");
    scanf("%i%i", &a, &b);
    printf("AREA = %i\n", a*b);
    printf("Perimeter = %i\n", 2*(a+b));
}