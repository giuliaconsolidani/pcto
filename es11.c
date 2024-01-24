#include <stdio.h>

int main()
{
    char k;
    printf("inserisci un carattere\n");
    scanf(" %c", &k);
    if(k =='a')
    {
        printf("il carattere è una vocale");
    }
    else
    {
        printf("il carattere è una consonante");
    }
    return(0);
}