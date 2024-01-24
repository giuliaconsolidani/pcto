#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("scrivi un numero\n");
    scanf("%d", &x);
    y = 2;
    while( y<x)
    {
        x--;
    if(x%y == 0)
    {
        printf(" non è un numero primo");
        break ;
    }
    else
        x = x + 1;
    }
    if(x = y)
    {
        printf("è primo");
    }
}