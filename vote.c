#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter the age\n");
    scanf("%i", &age);
    if ( age >=18)
    {
        printf("Eligible to vote\n");

    }
    else
    {
        printf("Not eligible to vote\n");
    }
}