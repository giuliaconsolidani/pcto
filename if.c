#include <stdio.h>
 int main()
 { 
    int x;
    int y;
    printf(" inserisci il valore di x\n");
    scanf(" %d ", &x );
    printf(" inserisci il valore di y\n");
    scanf(" %d ", &y );
    if( x > y)
    {
        printf(" x è maggiore di y\n ");
    }
    else if(x==y)
    {  
         printf("x è uguale a y\n");
    }
    else if(x!=y)
    {
        printf("x è diverso da y\n");
    }
    else
    {
        printf(" y è maggiore di x\n ");
    }
    return (0);
    }