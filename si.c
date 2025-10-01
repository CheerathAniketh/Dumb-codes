// to find simple interest
#include <stdio.h>

int main(void)
{
    float p,t,r;
    printf("Enter the values of p,t,r\n");
    scanf("%f%f%f", &p, &t, &r);
    printf("SI  %f\n", (p*t*r)/100);

}