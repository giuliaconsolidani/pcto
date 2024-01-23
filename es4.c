#include <stdio.h>

int main()
{
    int x;
    int y;
    printf(" valore di x\n");
    scanf(" %d", &x );
    printf(" valore di y\n");
    scanf(" %d", &y );
    if(x%y==0)
    {
        printf(" x è divisibile per y");
    }
    else
    {
        printf(" x non è divisibile per y");
    }
    return (0);
    }