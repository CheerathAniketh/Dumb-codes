#include <stdio.h>

int main(void)

{
    int i, sum = 0;
    for ( i = 1; i < 10; i = i+2)
    {
        sum = sum + i;
        //printf("SUM IS %i\n", sum);
    }
    printf("SUM is %i\n", sum);
}