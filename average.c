// to find average without using arrays
#include <stdio.h>

int main(void)
{
    int a,b,c, total;
    printf("Enter the values b, of a,b, c\n");
    scanf("%i%i%i", &a, &b, &c);
    total = a + b + c;
    printf("total = %i\n", total);
    printf("Average = %f\n", total/ 3.0);
}