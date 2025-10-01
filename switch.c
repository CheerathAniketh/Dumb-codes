#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Enter values of a, b\n");
    scanf("%i%i", &a, &b);
    printf("Enter your choice\n");
    scanf("%i", &c);
    switch (c)
    {
        case 1: printf("hi 1");
        break;
        case 2 : printf("hI 2");
        break;
        case 3 : printf("Hi 3");
        break;
        case 4 : printf("HI 4");
        break;
        default : printf("Default");
    }
}