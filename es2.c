#include <stdio.h>

int main()
{
    int g;

    printf(" inserisci l'età di g\n");
    scanf( " %d ", &g );
   
    if( g >= 18)
    {
        printf(" g è maggiorenne\n ");
    }
   
    else
    {
        printf(" g è minorenne\n ");
    }

    return (0);
    }
    