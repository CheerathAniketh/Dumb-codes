#include <stdio.h>

int main(void)
{
    int A, B;
    printf("Enter values of a and b\n");
    scanf("%i%i", &A, &B);
    printf("BITWISE AND %i\n", A&B);
    printf("BITWISE OR %i\n", A|B);
    printf("BITWISE XOR %i\n", A^B);
    printf("BITWISE COMPLEMENT %i\n", ~A);
    printf("BITWISE  LEFT SHIFT %i\n", A<<2);
    printf("BITWISE RIGHT SHIFT %i\n", A>>2);
}