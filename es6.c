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
    if(b-a==c-b)
    {
        printf(" è una progressione aritmetica");
    }
    else
    {
        printf(" non è una progressione aritmetica");
    }
    return (0);
    }