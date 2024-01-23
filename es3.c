#include <stdio.h>

int main()
{
    int etaxpatente;
    int eta;
    printf(" inserisci a che età si può prendere la patente in italia\n");
    scanf(" %d", &etaxpatente );
    printf("inserisci la tua età");
    scanf(" %d", &eta );
    if(eta >= etaxpatente)
    {
        printf(" l'utente può prendere la patente");
    }
    else
    {
        printf(" l'utente non può prendere la patente");
    }
    return (0);
    }