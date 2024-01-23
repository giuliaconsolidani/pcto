#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf(" valore di a\n");
    scanf(" %d", &a );
    printf(" valore di b\n");
    scanf(" %d", &b );
    printf(" valore di c\n");
    scanf(" %d", &c );
    if(a+b>c && b+c>a && a+c>b)
    {
        printf(" è un triangolo");
    }
    else
    {
        printf(" non è un traingolo");
    }
    return (0);
    }