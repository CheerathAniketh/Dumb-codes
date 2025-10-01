#include <stdio.h>

int main(void)
{
    int i, SUM = 0;
    for ( i = 2; i < 11; i= i + 2 )
    {
        SUM = SUM + i;
        //printf("NOW SUM IS %i\n", SUM);
        
    }

    printf("SUM = %i\n", SUM);
}
