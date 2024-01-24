#include <stdio.h>

void differenza(int a, int b, int c)
{
    c = a - b;
    printf("sei nato %d anni prima del viaggio sulla Luna\n", c);
}

void somma(int a, int b, int c)
{
    c  = b - a;
    printf("sei nato %d anni prima del viaggio sulla Luna\n", c);
}
int main ()
{
    int anno;
    int annox;
    int risultato;
    annox = 1969;
    printf("in che anno sei nato?\n");
    scanf("%d", &anno);
    if(anno == 1969)
    {
        printf("sei nato nello stesso anno del viaggio sulla Luna");
    }
    else if(anno > 1969)
    {
        differenza(anno, 1969, risultato);
    }
    else if(anno<1969)
    {
        somma(anno, 1969, risultato);
    }
}